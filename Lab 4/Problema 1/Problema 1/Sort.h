#pragma once
class Sort
{
    int count;
    int* v;
public:
    Sort(int n, int min, int max);
    Sort(int* vector, int nr_elemente);
    Sort(int count, ...);
    Sort(char* string);
    Sort() : v(new int[3] {0, 2, 3}), count(3) {};
    void Swap(int& a, int& b);
    void InsertSort(bool ascendent = false);
    
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};
