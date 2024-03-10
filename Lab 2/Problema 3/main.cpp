#include <iostream>
#include "movie.h"
#include "MovieSeries.h"
#include "comp.h"


int main()
{
	movie UltimaNoapte, Morometii;
	UltimaNoapte.setName("UltimaNopate");
	UltimaNoapte.setRelease(1890);
	UltimaNoapte.setScore(9.75);
	UltimaNoapte.setLenght(123);

	Morometii.setName("Morometii");
	Morometii.setRelease(1976);
	Morometii.setScore(9.15);
	Morometii.setLenght(150);

	MovieSeries serie;
	serie.Init();
	serie.Add(&UltimaNoapte);
	serie.Add(&Morometii);

	serie.Display();

	std::cout<<compareScore(UltimaNoapte, Morometii);
}
