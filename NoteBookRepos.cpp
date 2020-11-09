#include "NoteBooksRepos.h"
#include <fstream>
using namespace std;

NoteBookRepos::NoteBookRepos(bool sync) : Repository(sync)
{
	ReadFromStorage();
}

NoteBookRepos::~NoteBookRepos()
{

}

bool NoteBookRepos::Add(NoteBook& notebook)
{
	return Repository::Add(&notebook);
}

void NoteBookRepos::ReadFromStorage()
{
	string path1 = "NoteBooks.txt";
	ifstream myfile1(path1);
	if (!myfile1)
	{
		throw("Error: file not found\n");

	}
	int NUM_Notes = 100;
	string name;
	string type2;
	int amount = 0;
	int i2 = 0;
	while (myfile1 >> name >> type2 >> amount && i2++ < NUM_Notes)
	{

		NoteBook* notebook = new NoteBook(name, type2, amount);
		Add(*notebook);
	}

	myfile1.close();
}

void NoteBookRepos::WriteToStorage()
{
	ofstream outP1("NoteBooks.txt", ios::out);

	for (int i = 0; i <= current; i++) {
		NoteBook* notebook = (NoteBook*)data[i];
		outP1 << notebook->GetInfo() << endl;
	}
	outP1.close();

}