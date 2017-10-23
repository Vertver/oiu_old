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
  //�������� ���� ��� ���������������
  if ( dlgOpen->Execute() )
  {
    try
    {
      //�������� ������� ��������� ����
      player->FileName = dlgOpen->FileName;
      player->DeviceType = dtAutoSelect;
      player->Open();
      player->TimeFormat = tfMilliseconds;
      txtFile->Text = dlgOpen->FileName;
      m_State = psFileOpened;
    }
    catch ( Exception * )
    {
      Application->MessageBox("������ ��� �������� �����",
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
  //���������� ����������� � ������������ � ���������� �������������
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
  //��������� ��������� ������� � ��������������� �����
  switch ( m_State )
  {
  case psNoFile:
    lblPos->Caption = "";
    break;
  case psFileOpened:
  case psPlaying:
  case psPaused:
    {
      //��������� ����� �� ����������� � ������, ������� � ������������*10
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
  //������/����������� ���������������
  m_State = psPlaying;
  RefreshControls();  
  player->Play();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::cmbPauseClick(TObject *Sender)
{
  //��������� ���������������
  player->Pause();
  m_State = psPaused;
  RefreshControls();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::cmbStopClick(TObject *Sender)
{
  //���������� ���������������
  player->Stop();
  player->Rewind();
  m_State = psFileOpened;
  RefreshControls();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::cmbBackClick(TObject *Sender)
{
  //��������� ����� �� 10%
  long new_pos = player->Position - player->Length/10;
  player->Position = (new_pos >= 0) ? new_pos : 0;
  RefreshControls();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::cmbForwClick(TObject *Sender)
{
  //��������� ������ �� 10%
  long new_pos = player->Position + player->Length/10;
  player->Position = (new_pos < player->Length) ? new_pos : player->Length;
  RefreshControls();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::refresh_timerTimer(TObject *Sender)
{
  if ( m_State == psPlaying && player->Mode != mpPlaying )
  {
    //����������� ���������������
    m_State = psFileOpened;
    RefreshControls();
  }
  else
  {
    //������ ������� ��������� �������� ���������������
    RefreshTimePos();
  }
}
//---------------------------------------------------------------------------

