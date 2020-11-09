#include "Shops.h"
#include <iostream>
#include <fstream>
using namespace std;

Shops::Shops()
{
	shops = new Shop[100];
	lastShopIndex = -1;
}

Shops::~Shops()
{
	delete[] shops;
}

void Shops::AddShop(Shop& shop)
{
	if (lastShopIndex >= 100)
	{
		throw "no memory for shops!!!";
	}

	shops[++lastShopIndex] = shop;

	ofstream outf("Shops.txt", ios::out);
	if (!outf)
	{
		cout << "Problem with file opening" << endl;
	}
	else {
		for (int i = 0; i <= lastShopIndex; i++) {
			outf << shops[i].ShopInfo() << endl;
		}
	}
}

void Shops::WriteShops()
{
	cout << "All shops: " << endl;
	for (int i = 0; i <= lastShopIndex; i++)
	{
		shops[i].Write();
		cout << endl;
	}
}

Shop Shops::getShopByIndex(int index)
{
	return shops[index];
}
