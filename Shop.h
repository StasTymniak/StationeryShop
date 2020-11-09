#ifndef SHOP_H
#define SHOP_H

#include"Entity.h"
#include<string>

using namespace std;

class Shop :public Entity
{
	string name;
	string location;
	int rating;
	int discount;
	bool goods;
public:
	
	Shop(string = "", string = "Lviv", int = 3, int = 5, bool = true);

	void Write();
	int GetRating();
	int GetDiscount();
	string ShopInfo();
	bool GetGoodsInfo();
};

#endif // !SHOP_H