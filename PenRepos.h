#pragma once

#include "Repository.h"
#include "Pen.h"

class PenRepository : public Repository
{
public:
	PenRepository(bool sync = false);
	~PenRepository();
	bool Add(Pen& pen);
	void ReadFromStorage();
	void WriteToStorage();

};