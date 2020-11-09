#ifndef PEN_H
#define PEN_H

#include"Goods.h"
#include<string>

using namespace std;

class Pen:public Goods
{
	string company;
	string type;
	string color;
	int diameter;

public:
	Pen(string = "", string = "", string = "", int = 5);

	virtual void Write();
	virtual string GetInfo();
	string GetPenType();
};

#endif // PEN_H