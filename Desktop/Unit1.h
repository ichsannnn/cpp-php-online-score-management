//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TFHome : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *EUserLogin;
	TPanel *PbtnLogin;
	TPanel *PLogin;
	TLabel *LUserLogin;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *LPassLogin;
	TEdit *EPassLogin;
	TEdit *Edit1;
	TTimer *Timer1;
	TPanel *PClose;
	TPanel *PbtnRegister;
	TLabel *Label2;
	TButton *btnLogin;
	TImage *Image1;
	TCheckBox *CBShowPassword;
	void __fastcall PbtnLoginMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PbtnLoginMouseLeave(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall PCloseClick(TObject *Sender);
	void __fastcall PCloseMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PCloseMouseLeave(TObject *Sender);
	void __fastcall PbtnRegisterMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall PbtnRegisterMouseLeave(TObject *Sender);
	void __fastcall PbtnRegisterClick(TObject *Sender);
	void __fastcall btnLoginClick(TObject *Sender);
	void __fastcall EUserLoginKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall EPassLoginKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall CBShowPasswordClick(TObject *Sender);
	void __fastcall PLoginClick(TObject *Sender);





private:	// User declarations
public:		// User declarations
	__fastcall TFHome(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFHome *FHome;
//---------------------------------------------------------------------------
#endif
