//---------------------------------------------------------------------------

#ifndef Unit9H
#define Unit9H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TFUpdate : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TPanel *Panel4;
	TLabel *Label1;
	TPanel *PUpdate;
	TImage *Image1;
	TPanel *PClose;
	TTimer *Timer1;
	TEdit *Edit1;
	TLabel *Label4;
	TLabel *LIchsan;
	TLabel *Label2;
	TLabel *LHasan;
	void __fastcall PUpdateMouseLeave(TObject *Sender);
	void __fastcall PUpdateMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PUpdateClick(TObject *Sender);
	void __fastcall PCloseClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall PCloseMouseLeave(TObject *Sender);
	void __fastcall PCloseMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall LHasanMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall LHasanMouseLeave(TObject *Sender);
	void __fastcall LIchsanMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall LIchsanMouseLeave(TObject *Sender);
	void __fastcall LIchsanClick(TObject *Sender);
	void __fastcall LHasanClick(TObject *Sender);




private:	// User declarations
public:		// User declarations
	__fastcall TFUpdate(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFUpdate *FUpdate;
//---------------------------------------------------------------------------
#endif
