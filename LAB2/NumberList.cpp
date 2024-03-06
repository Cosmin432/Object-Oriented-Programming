#include "NumberList.h"
#include <iostream>

void NumberList::Init()
{
    this->count = 0;
}

bool NumberList::Add(int x)
{
    if (this->count >= 10)
        return false;
    this->numbers[count] = x;
    this->count++;
    return false;
}

void NumberList::Sort()
{
    for (int i = 0;i <= 10;i++)
        for (int j = 0;j <= 10;j++)
            if (this->numbers[i] < this->numbers[j]) {
                int aux = this->numbers[i];
                this->numbers[i] = this->numbers[j];
                this->numbers[j] = aux;
            }
}

void NumberList::Print()
{
    for (int i = 0;i < 10;i++)
        std::cout << this->numbers[i] << " ";
}