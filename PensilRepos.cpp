#include "PensilRepos.h"
#include <fstream>
using namespace std;

PensilRepository::PensilRepository(bool sync) : Repository(sync)
{
	ReadFromStorage();
}

PensilRepository::~PensilRepository()
{

}

bool PensilRepository::Add(Pensil& pensil)
{
	return Repository::Add(&pensil);
}

void PensilRepository::ReadFromStorage()
{
	string path3 = "Pensil.txt";
	ifstream myfile3(path3);
	if (!myfile3)
	{
		throw("Error: file not found\n");

	}
	int NUM_Pensil = 100;
	string company1;
	string type1;
	string color1;
	string softness;
	int i3 = 0;
	while (myfile3 >> company1 >> type1 >> color1 >> softness && i3++ < NUM_Pensil)
	{

		Pensil* pensil = new Pensil(company1, type1, color1, softness);
		Add(*pensil);
	}

	myfile3.close();
}

void PensilRepository::WriteToStorage()
{
	ofstream outP1("Pensil.txt", ios::out);

	for (int i = 0; i <= current; i++) {
		Pensil* pensil = (Pensil*)data[i];
		outP1 << pensil->GetInfo() << endl;
	}
	outP1.close();

}