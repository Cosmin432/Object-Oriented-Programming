#include "Sort.h"
#include <cstring>
#include <string>

int main()
{
	
	Sort s(12, 20, 30);
	s.BubbleSort(0);
    s.Print();

	Sort m(6, 14, 233, 4, 11, 22, 444);
	m.BubbleSort(1);
	//m.Print();

    char sir[30] = "11,1,12,13,14,10,100";
	char* string_sirul = sir;
	Sort c(string_sirul);
	c.BubbleSort(1);
	//c.Print();

	Sort d;
	//d.Print()




}

