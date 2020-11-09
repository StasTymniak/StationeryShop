#include "Pen.h"
#include <iostream>
#include <fstream>
using namespace std;

Pen::Pen(string company, string type, string color, int diameter)
{
	this->company = company;
	this->type = type;
	this->color = color;
	this->diameter = diameter;

}

void Pen::Write()
{
	cout << "Pen:\nCompany: " << company << "\nType: " << type << "\nColor: " << color << "\nDiameter: " << diameter << "mm" << endl;
	cout << endl;
}

string Pen::GetPenType()
{
	return type;
}

string Pen::GetInfo()
{
	string info = company + " " + type + " " + color + " " + to_string(diameter);
	return info;
}
