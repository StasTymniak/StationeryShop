#include "NoteBook.h"
#include <iostream>
using namespace std;

NoteBook::NoteBook(string name, string type, int amount)
{
	this->name = name;
	this->type = type;
	this->amount = amount;

}

void NoteBook::Write()
{
	cout << "NoteBook:\nName: " << name << "\nType: " << type << "\nNumber of sheets: " << amount << "shts" << endl;
	cout << endl;
}

string NoteBook::GetNoteBookType()
{
	return type;
}

string NoteBook::GetInfo()
{
	string info = name + " " + type + " " + to_string(amount);
	return info;
}
