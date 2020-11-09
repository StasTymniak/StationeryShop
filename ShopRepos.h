#pragma once

#include "Repository.h"
#include "Shop.h"

class ShopRepository : public Repository
{
public:
	ShopRepository(bool sync = false);
	~ShopRepository();
	bool Add(Shop& shop);
	void ReadFromStorage();
	void WriteToStorage();

};