//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TDM1 : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *config;
	TADOQuery *QTeacher;
	TDataSource *DSTeacher;
	TADOQuery *QStudent;
	TDataSource *DSStudent;
	TADOQuery *QKelas;
	TADOQuery *QPelajaran;
	TADOQuery *QNilai;
	void __fastcall configDisconnect(TADOConnection *Connection, TEventStatus &EventStatus);
	void __fastcall configAfterDisconnect(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TDM1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDM1 *DM1;
//---------------------------------------------------------------------------
#endif
