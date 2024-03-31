#pragma once
#include <iostream>
class Phrase
{
private:
	
	char** vec;
	int j;

public:
	operator int();
	char* operator [](int index);
	Phrase(const char* p);

	~Phrase();

	void Print();
	
};
