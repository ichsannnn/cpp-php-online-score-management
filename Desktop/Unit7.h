//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "frxClass.hpp"
#include "frxDBSet.hpp"
//---------------------------------------------------------------------------
class TFReportT : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TPanel *Panel4;
	TEdit *EUsername;
	TLabel *Label1;
	TPanel *PSearch;
	TPanel *PShow;
	TfrxDBDataset *DBTeacher;
	TfrxReport *RTeacher;
	TPanel *PClose;
	void __fastcall PShowClick(TObject *Sender);
	void __fastcall PSearchClick(TObject *Sender);
	void __fastcall EUsernameKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall PSearchMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PSearchMouseLeave(TObject *Sender);
	void __fastcall PShowMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PShowMouseLeave(TObject *Sender);
	void __fastcall PCloseMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PCloseMouseLeave(TObject *Sender);
	void __fastcall PCloseClick(TObject *Sender);




private:	// User declarations
public:		// User declarations
	__fastcall TFReportT(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFReportT *FReportT;
//---------------------------------------------------------------------------
#endif
