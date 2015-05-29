//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFRegister : public TForm
{
__published:	// IDE-managed Components
	TPanel *PClose;
	TLabel *Label2;
	TLabel *Label3;
	TEdit *EFirstName;
	TEdit *ELastName;
	TEdit *EUserReg;
	TEdit *EPassReg;
	TPanel *PbtnSignup;
	TLabel *Label4;
	TTimer *Timer1;
	TButton *btnSignup;
	TButton *btnClose;
	TComboBox *CBBGender;
	TEdit *Edit1;
	void __fastcall PCloseMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PCloseMouseLeave(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall btnSignupClick(TObject *Sender);
	void __fastcall btnCloseClick(TObject *Sender);
	void __fastcall PCloseClick(TObject *Sender);
	void __fastcall EFirstNameKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall ELastNameKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall EUserRegKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall EPassRegKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall PbtnSignupMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PbtnSignupMouseLeave(TObject *Sender);
	void __fastcall CBBGenderKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall FormClick(TObject *Sender);







private:	// User declarations
public:		// User declarations
	__fastcall TFRegister(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFRegister *FRegister;
//---------------------------------------------------------------------------
#endif
