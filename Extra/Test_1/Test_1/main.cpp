#include "Phrase.h"
#include <iostream>

int main()
{
	Phrase p = "Ana are bere";
	p.Print();
	int cuv = (int)p;
	std::cout << p[0];
	//std::cout << cuv;
}