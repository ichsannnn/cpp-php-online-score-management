//---------------------------------------------------------------------------


#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TDM1 *DM1;
//---------------------------------------------------------------------------
__fastcall TDM1::TDM1(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TDM1::configDisconnect(TADOConnection *Connection, TEventStatus &EventStatus)

{
	config->Connected = true;
}
//---------------------------------------------------------------------------


void __fastcall TDM1::configAfterDisconnect(TObject *Sender)
{
	config->Connected = true;
}
//---------------------------------------------------------------------------

