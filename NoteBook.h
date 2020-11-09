#ifndef NOTEBOOK_H
#define NOTEBOOK_H

#include"Goods.h"
#include<string>

using namespace std;

class NoteBook :public Goods
{
	string name;
	string type;
	int amount;

public:
	NoteBook(string = "", string = "", int = 64);
	virtual void Write();
	virtual string GetInfo();
	string GetNoteBookType();
};

#endif // NOTEBOOK_H