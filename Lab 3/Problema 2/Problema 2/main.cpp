#include <iostream>
#include "Canvas.h"


int main()
{
	Canvas can(50 ,50);
	can.FillCircle(20, 20,10, '#');
	can.DrawCircle(20, 20, 15, '&');
	can.FillRect(2, 4, 10, 10, '*');
	can.Clear();
	can.DrawRect(0, 0, 13, 13, '+');
	can.DrawLine(50,0, 0, 50, '-');
	can.Print();
    
}