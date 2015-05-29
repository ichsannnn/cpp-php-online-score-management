//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFDelTeacher : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TPanel *Panel4;
	TEdit *EUsername;
	TLabel *Label1;
	TPanel *PDelete;
	TPanel *Panel5;
	TPanel *PClose;
	TButton *btnSearch;
	TEdit *Edit2;
	void __fastcall PDeleteClick(TObject *Sender);
	void __fastcall Panel5Click(TObject *Sender);
	void __fastcall PCloseClick(TObject *Sender);
	void __fastcall PCloseMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PCloseMouseLeave(TObject *Sender);
	void __fastcall btnSearchClick(TObject *Sender);
	void __fastcall EUsernameKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall FormShow(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TFDelTeacher(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFDelTeacher *FDelTeacher;
//---------------------------------------------------------------------------
#endif
