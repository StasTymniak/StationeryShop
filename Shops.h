#ifndef SHOPS_H
#define SHOPS_H

#include"Shop.h"

class Shops
{

	Shop* shops;
	

public:
	int lastShopIndex;
	Shops();
	~Shops();

	void AddShop(Shop&);
	void WriteShops();
	Shop getShopByIndex(int);

};

#endif // SHOPS_H