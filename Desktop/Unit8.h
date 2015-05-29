//---------------------------------------------------------------------------

#ifndef Unit8H
#define Unit8H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFDeleteS : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *PClose;
	TPanel *Panel2;
	TPanel *Panel3;
	TPanel *Panel4;
	TLabel *Label1;
	TButton *btnSearch;
	TEdit *Enis;
	TPanel *PDelete;
	TPanel *PIcoSearch;
	TEdit *Edit2;
	void __fastcall PCloseClick(TObject *Sender);
	void __fastcall btnSearchClick(TObject *Sender);
	void __fastcall PIcoSearchClick(TObject *Sender);
	void __fastcall EnisKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall PDeleteClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFDeleteS(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFDeleteS *FDeleteS;
//---------------------------------------------------------------------------
#endif
