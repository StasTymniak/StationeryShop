#pragma once
#include "Repository.h"
#include "Pensil.h"

class PensilRepository : public Repository
{
public:
	PensilRepository(bool sync = false);
	~PensilRepository();
	bool Add(Pensil& pensil);
	void ReadFromStorage();
	void WriteToStorage();
};