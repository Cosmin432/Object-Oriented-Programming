#pragma once
#include "Sort.h"
#include <ctime>
#include <iostream>
#include <stdlib.h>
#include <stdarg.h>


void Sort::InsertSort(bool ascending)
{
    for (int i = 1; i < count; i++)
    {
        int key = v[i];
        int j = i - 1;

        
        while (j >= 0 && (ascending ? v[j] > key : v[j] < key))
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
    
}

Sort::Sort(int n, int min, int max)
{
    this->v = new int[count];
    srand((unsigned)time(nullptr));
    this->count = n;
   
    for (int i = 0; i < n; i++)
    {
        v[i] = min + rand() % (max - min + 1);
    }
}


Sort::Sort(int* vector, int nr_elemente)
{
    this->v = new int[nr_elemente];
    for (int i = 0;i < nr_elemente;i++)
        {
        this->v[i] = v[i];
        }
    this->count = nr_elemente;
}

Sort::Sort(int count,...)
{
    this->v = new int[count];
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count;i++)
    {
        this->v[i] = va_arg(args, int);
    }
    va_end(args);
    this->count = count;

}
Sort::Sort(char* string)
{
    this->count = 0;
    int i = 0;
    while (string[i] != '\0')
    {
        if (string[i] ==',')
            this->count++;
        i++;
    }
    this->count++;
    i = 0;
    int j = 0;
    int aux=0;
    this->v = new int[this->count];
    while (string[i] != '\0')
    {
        if (string[i] >= '0' && string[i] <= '9')
        {
           
            aux = aux * 10 + (string[i] - '0');
        }
        else if (string[i] == ',' || string[i + 1] == '\0')
        {
            this->v[j++] = aux;
            aux = 0;
        }
        i++;
    }
    this->v[j] = aux;
}



void Sort::BubbleSort(bool ascendent)
{
    for (int i = 0; i < count - 1; i++) {
        // Ultimul i elemente sunt deja sortate, deci nu este necesar să le parcurgem din nou
        for (int j = 0; j < count - i - 1; j++) {
            // Dacă elementul curent este mai mare (sau mai mic, în funcție de direcția sortării)
            // decât elementul următor, le interschimbăm
            if (ascendent ? v[j] > v[j + 1] : v[j] < v[j + 1]) {
                Swap(v[j], v[j + 1]);
            }
        }
    }
}

void Sort::Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Sort::Print()
{
    for (int i = 0;i < this->count;i++)
        printf("%d ", this->v[i]);
}
int Sort::GetElementFromIndex(int i)
{
    return this->v[i];
}
int Sort::GetElementsCount()
{
    return this->count;
}