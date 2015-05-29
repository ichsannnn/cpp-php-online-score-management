//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdHTTP.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TIdHTTP *IdHTTP1;
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TPanel *Panel4;
	TPanel *Panel5;
	TPanel *Panel6;
	TPanel *Panel7;
	TEdit *Edit1;
	TTimer *Timer1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Panel5Click(TObject *Sender);
	void __fastcall Panel6Click(TObject *Sender);
	void __fastcall Panel7Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Panel7MouseLeave(TObject *Sender);
	void __fastcall Panel7MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel5MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel5MouseLeave(TObject *Sender);
	void __fastcall Panel6MouseLeave(TObject *Sender);
	void __fastcall Panel6MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);



private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
	String NEWVERSION;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
