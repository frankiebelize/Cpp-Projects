//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
void __fastcall TForm1::add_buttonClick(TObject *Sender)
{
	String task_text=add_task->Text;
	task_list->Items->Add(task_text);
    add_task->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::task_listItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	int index = Item->Index;
    task_list->Item->Delete(index);
}
//---------------------------------------------------------------------------
