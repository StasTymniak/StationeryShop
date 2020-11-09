#ifndef GOODS_H
#define GOODS_H

#include<string>
#include"Entity.h"
using namespace std;

class Goods :public Entity
{
public:
	virtual void Write(){

	}
	virtual string GetInfo() {
		return "";
	}
};

#endif // !GOODS_H