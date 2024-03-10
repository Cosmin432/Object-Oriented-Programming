#include "comp.h"
#include <cstring>
#include "movie.h"
#include <cmath>

int compareName(const movie& s1, const movie& s2)
{

	return std::strcmp(s1.getName(), s2.getName());
}
int compareRelease(const movie& s1, const movie& s2)
{
	int r1 = s1.getRelease();
	int r2 = s2.getRelease();
	if (r1 == r2)
		return 0;
	else if (r1 > r2)
		return 1;
	else
		return -1;
}


int compareScore(const movie& s1, const movie& s2)
{
	double score1 = s1.getScore();
	double score2 = s2.getScore();
	double epsilon = 1e-6;
	double difference = score1 - score2;
	if (abs(difference) < epsilon)
		return 0;
	else if (difference > 0)
		return 1;
	else
		return -1;
}
int compareLenght(const movie& s1, const movie& s2)
{
	int E1 = s1.getLenght();
	int E2 = s2.getLenght();
	if (E1 == E2)
		return 0;
	else if (E1 > E2)
		return 1;
	else
		return -1;
}
int compareAge(const movie& s1, const movie& s2)
{
	int E1 = s1.getAge();
	int E2 = s2.getAge();
	if (E1 == E2)
		return 0;
	else if (E1 > E2)
		return 1;
	else
		return -1;
}