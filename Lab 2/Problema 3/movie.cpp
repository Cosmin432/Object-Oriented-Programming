#include "movie.h"
#include <iostream>


void movie::setName(const char* x)
{
	strcpy_s(name, x);
}

const char* movie::getName()const
{
	return name;
}

void movie::setRelease(int x)
{
	releaseYear = x;
}

int movie::getRelease()const
{
	return releaseYear;
}

void movie::setScore(double x)
{
	score = x;
}

double movie::getScore()const
{
	return score;
}

void movie::setLenght(int x)
{
	lenght = x;
}

int movie::getLenght()const
{
	return lenght;
}

int movie::getAge()const
{
	return int(2024 - releaseYear);
}