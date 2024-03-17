#pragma once
#include <cstring>
class Canvas
{
    
    int width, height;
    int** m;
public:
    Canvas(int width, int height)
    {
        this->width = width;
        this->height = height;
        m = new int* [height];
        for (int i = 0;i < height;i++)
        {
            m[i] = new int[width];
        }
        for (int i = 0;i < height;i++)
            for (int j = 0;j < width;j++)
                m[i][j] =32;
    }
    void FillScanline(int x1, int x2, int y, char ch);
    void DrawCircle(int x, int y, int ray, char ch);
    void SetPixel(int x, int y, char ch);
    void FillCircle(int x, int y, int ray, char ch);
    void DrawRect(int left, int top, int right, int bottom, char ch);
    void FillRect(int left, int top, int right, int bottom, char ch);
    void DrawLine(int x1, int y1, int x2, int y2, char ch);
    void Print(); // shows what was printed
    void Clear(); // clears the canvas
};


