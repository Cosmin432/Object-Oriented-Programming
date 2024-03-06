#include <iostream>
#include "NumberList.h"

int main()
{
    NumberList v;
    v.Init();


    for (int i = 0;i <= 10;i++)
    {
        int x;
        std::cin >> x;
        v.Add(x);
    }
    v.Sort();
    v.Print();
}