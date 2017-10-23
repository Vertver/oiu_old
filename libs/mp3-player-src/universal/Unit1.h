//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <MPlayer.hpp>
#include <Dialogs.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
  TLabel *Label1;
  TEdit *txtFile;
  TButton *cmbBrowse;
  TMediaPlayer *player;
  TOpenDialog *dlgOpen;
  TSpeedButton *cmbPlay;
  TSpeedButton *cmbPause;
  TSpeedButton *cmbStop;
  TSpeedButton *cmbBack;
  TSpeedButton *cmbForw;
  TLabel *lblPos;
  TPanel *video_pane;
  TTimer *refresh_timer;
  void __fastcall cmbBrowseClick(TObject *Sender);
  void __fastcall FormCreate(TObject *Sender);
  void __fastcall cmbPlayClick(TObject *Sender);
  void __fastcall cmbPauseClick(TObject *Sender);
  void __fastcall cmbStopClick(TObject *Sender);
  void __fastcall cmbBackClick(TObject *Sender);
  void __fastcall cmbForwClick(TObject *Sender);
  void __fastcall refresh_timerTimer(TObject *Sender);
private:	// User declarations
  //Состояние проигрывателя (для правильного оформления и поведения формы)
  enum TPlayerState
  {
    psNoFile,     //Первоначальное состояние (нечего воспроизводить)
    psFileOpened, //Задан файл, можно воспроизводить
    psPlaying,    //Идет воспроизведение
    psPaused      //Пауза
  }m_State;

  void RefreshControls();
  void RefreshTimePos();
public:		// User declarations
  __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
