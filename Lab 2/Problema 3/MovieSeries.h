#pragma once
#include "movie.h"
#include <vector>
class MovieSeries
{
private:
	
	std::vector<movie*> lista;
	int count;

public:

	void Init();
	int Add(movie* x);
	void Display();
	

	
};

