#include "PenRepos.h"
#include <fstream>
using namespace std;

PenRepository::PenRepository(bool sync) : Repository(sync)
{
	ReadFromStorage();
}

PenRepository::~PenRepository()
{

}

bool PenRepository::Add(Pen& pen)
{
	return Repository::Add(&pen);
}

void PenRepository::ReadFromStorage()
{
	string path1 = "Pens.txt";
	ifstream myfile1(path1);
	if (!myfile1)
	{
		throw("Error: file not found\n");

	}
	int NUM_Pens = 100;
	string company;
	string type;
	string color;
	int diameter = 0;
	int i1 = 0;
	while (myfile1 >> company >> type >> color >> diameter && i1++ < NUM_Pens)
	{

		Pen* pen = new Pen(company, type, color, diameter);
		Add(*pen);
	}

	myfile1.close();
}

void PenRepository::WriteToStorage()
{
	ofstream outP1("Pens.txt", ios::out);

	for (int i = 0; i <= current; i++) {
		Pen* pen = (Pen*)data[i];
		outP1 << pen->GetInfo() << endl;
	}
	outP1.close();

}