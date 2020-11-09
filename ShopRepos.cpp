#include "ShopRepos.h"
#include <fstream>
using namespace std;

ShopRepository::ShopRepository(bool sync) : Repository(sync)
{
	ReadFromStorage();
}

ShopRepository::~ShopRepository()
{

}

bool ShopRepository::Add(Shop& shop)
{
	return Repository::Add(&shop);
}

void ShopRepository::ReadFromStorage() {


	string path="Shops.txt";

	ifstream myfile(path);

	if (!myfile)
	{
		throw("Error: file not found\n");

	}
	int NUM_Shops = 100;
	string name;
	string loc;
	int rat = 0;
	int disc = 0;
	int i = 0;
	bool goods = true;
	while (myfile >> name >> loc >> rat >> disc >> goods && i++ < NUM_Shops)
	{
		Shop* shop= new Shop(name, loc, rat, disc, goods);
		Add(*shop);
	}

	myfile.close();


}
void ShopRepository::WriteToStorage()
{	
	ofstream outP1("Shops.txt", ios::out);

	for (int i = 0; i <= current; i++) {
		Shop* shop = (Shop*)data[i];
		outP1 << shop->ShopInfo() << endl;
	}
	outP1.close();

}