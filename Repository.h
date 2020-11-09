#pragma once

#include "Entity.h"

class Repository
{
public:
	Entity** data;
	int maxSize;
	
	int current;
	bool sync;

	bool Add(Entity*);
	virtual void ReadFromStorage() {}
	virtual void WriteToStorage() {}


	Repository(bool sync = false);
	~Repository();
};