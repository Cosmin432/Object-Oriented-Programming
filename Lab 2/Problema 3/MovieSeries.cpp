#include "MovieSeries.h"




void MovieSeries::Init()
{
	this->count = 0;
}

int MovieSeries::Add(movie* x)
{
	if (this->count > 16)
		return 0;
	else
	{
		this->count = this->count + 1;
		lista.push_back(x);

	}
	return 1;
}

void MovieSeries::Display()
{
	for (movie* m : lista)
	{
		printf("%s\n", m->getName());
		printf("%d\n", m->getRelease());
		printf("%lf\n", m->getScore());
		printf("%d\n", m->getLenght());
		printf("%d\n", m->getAge());
	}
}