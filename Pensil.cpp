#include "Pensil.h"
#include <iostream>

#include <fstream>
using namespace std;

Pensil::Pensil(string company, string type, string color, string softness)
{
	this->company = company;
	this->type = type;
	this->color = color;
	this->softness = softness;

}

void Pensil::Write()
{
	cout << "Pensil:\nCompany: " << company << "\nType: " << type << "\nColor: " << color << "\nSoftness: " << softness << endl;
	cout << endl;
}

string Pensil::GetPensilType()
{
	return type;
}

string Pensil::GetInfo()
{
	string info = company + " " + type + " " + color + " " + softness;
	return info;
}
