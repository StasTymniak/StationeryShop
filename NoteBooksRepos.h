#pragma once

#include "Repository.h"
#include "NoteBook.h"

class NoteBookRepos : public Repository
{
public:
	NoteBookRepos(bool sync = false);
	~NoteBookRepos();
	bool Add(NoteBook& notebook);
	void ReadFromStorage();
	void WriteToStorage();
};
