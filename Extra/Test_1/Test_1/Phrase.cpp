#include "Phrase.h"
#include <iostream>

void Phrase::Print()
{
	for (int i = 0;i < j;i++)
	{
		std::cout << vec[i] << '\n';
	}
}
char* Phrase::operator [](int index)
{
	return this->vec[index];
}

Phrase::operator int()
{
	return this->j;
}
Phrase::Phrase(const char* p)
{
	vec = new char* [100];
	int cnt = 0;
	int i = 0;
	j = 0;
	while (p[i] != '\0')
	{
		if (p[i] != ' ')
		{
			if (cnt == 0)
			{
				vec[j] = new char[100];

			}

			vec[j][cnt] = p[i];
			cnt++;
		}

		else
		{
			vec[j++][cnt] = '\0';
			cnt = 0;

		}
		i++;
	}
	vec[j++][cnt] = '\0';
}

Phrase::~Phrase()
{
	
	
		for (int k = 0; k < j; ++k)
			delete[] vec[k];

		delete[] vec;
	
}

