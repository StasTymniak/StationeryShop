#ifndef PENSIL_H
#define PENSIL_H

#include"Goods.h"
#include<string>

using namespace std;

class Pensil :public Goods
{
	string company;
	string type;
	string color;
	string softness;

public:
	Pensil(string = "", string = "", string = "", string = "");

	virtual void Write();
	virtual string GetInfo();
	string GetPensilType();
};

#endif // PENSIL_H