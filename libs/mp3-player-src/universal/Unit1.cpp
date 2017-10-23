//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdio.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
  : TForm(Owner)
{
  m_State = psNoFile;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::cmbBrowseClick(TObject *Sender)
{
  //Выбираем файл для воспроизведения
  if ( dlgOpen->Execute() )
  {
    try
    {
      //Пытаемся открыть указанный файл
      player->FileName = dlgOpen->FileName;
      player->DeviceType = dtAutoSelect;
      player->Open();
      player->TimeFormat = tfMilliseconds;
      txtFile->Text = dlgOpen->FileName;
      m_State = psFileOpened;
    }
    catch ( Exception * )
    {
      Application->MessageBox("Ошибка при открытии файла",
                              Application->Title.c_str(), MB_ICONEXCLAMATION);
      player->FileName = "";
      txtFile->Text = "";
    }
    RefreshControls();
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
  player->Display = video_pane;
  RefreshControls();
}
//---------------------------------------------------------------------------

void TForm1::RefreshControls()
{
  //Оформление компонентов в соответствии с состоянием проигрывателя
  switch ( m_State )
  {
  case psNoFile:
    cmbPlay->Enabled = false;
    cmbPause->Enabled = false;
    cmbStop->Enabled = false;
    cmbForw->Enabled = false;
    cmbBack->Enabled = false;
    cmbBrowse->Enabled = true;
    refresh_timer->Enabled = false;
    break;
  case psFileOpened:
    cmbPlay->Enabled = true;
    cmbPause->Enabled = false;
    cmbStop->Enabled = false;
    cmbForw->Enabled = true;
    cmbBack->Enabled = true;
    cmbBrowse->Enabled = true;
    refresh_timer->Enabled = false;
    break;
  case psPlaying:
    cmbPlay->Enabled = false;
    cmbPause->Enabled = true;
    cmbStop->Enabled = true;
    cmbForw->Enabled = false;
    cmbBack->Enabled = false;
    cmbBrowse->Enabled = false;
    refresh_timer->Enabled = true;
    break;
  case psPaused:
    cmbPlay->Enabled = true;
    cmbPause->Enabled = false;
    cmbStop->Enabled = true;
    cmbForw->Enabled = true;
    cmbBack->Enabled = true;
    cmbBrowse->Enabled = false;
    refresh_timer->Enabled = false;
    break;
  }
  RefreshTimePos();
}

void TForm1::RefreshTimePos()
{
  //Установка показаний позиции в воспроизводимом файле
  switch ( m_State )
  {
  case psNoFile:
    lblPos->Caption = "";
    break;
  case psFileOpened:
  case psPlaying:
  case psPaused:
    {
      //Переводим время из миллисекунд в минуту, секунды и миллисекунды*10
      long time = player->Position;
      long mm = time / 60000;
      time -= mm * 60000;
      long ss = time / 1000;
      long ms10 = (time - ss*1000)/10;
      char buff[20];
      sprintf( buff, "%0.2d:%0.2d.%0.2d", mm, ss, ms10 );
      lblPos->Caption = buff;
    }
    break;
  }
}
void __fastcall TForm1::cmbPlayClick(TObject *Sender)
{
  //Начало/продолжение воспроизведения
  m_State = psPlaying;
  RefreshControls();  
  player->Play();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::cmbPauseClick(TObject *Sender)
{
  //Остановка воспроизведения
  player->Pause();
  m_State = psPaused;
  RefreshControls();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::cmbStopClick(TObject *Sender)
{
  //Завершение воспроизведения
  player->Stop();
  player->Rewind();
  m_State = psFileOpened;
  RefreshControls();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::cmbBackClick(TObject *Sender)
{
  //Перемотка назад на 10%
  long new_pos = player->Position - player->Length/10;
  player->Position = (new_pos >= 0) ? new_pos : 0;
  RefreshControls();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::cmbForwClick(TObject *Sender)
{
  //Перемотка вперед на 10%
  long new_pos = player->Position + player->Length/10;
  player->Position = (new_pos < player->Length) ? new_pos : player->Length;
  RefreshControls();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::refresh_timerTimer(TObject *Sender)
{
  if ( m_State == psPlaying && player->Mode != mpPlaying )
  {
    //Закончилось воспроизведение
    m_State = psFileOpened;
    RefreshControls();
  }
  else
  {
    //Просто обновим показания счетчика воспроизведения
    RefreshTimePos();
  }
}
//---------------------------------------------------------------------------

