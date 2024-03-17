#include "Canvas.h"
#include <cmath>
#include <cstdio>

void Canvas::DrawCircle(int xc, int yc, int radius, char ch)
{
    int x = radius;
    int y = 0;
    int err = 0;

    while (x >= y)
    {
        SetPixel(xc + x, yc + y, ch);
        SetPixel(xc - x, yc + y, ch);
        SetPixel(xc + x, yc - y, ch);
        SetPixel(xc - x, yc - y, ch);
        SetPixel(xc + y, yc + x, ch);
        SetPixel(xc - y, yc + x, ch);
        SetPixel(xc + y, yc - x, ch);
        SetPixel(xc - y, yc - x, ch);

        if (err <= 0)
        {
            y += 1;
            err += 2 * y + 1;
        }
        if (err > 0)
        {
            x -= 1;
            err -= 2 * x + 1;
        }
    }
}

void Canvas::SetPixel(int x, int y, char ch)
{
    if (x >= 0 && x < width && y >= 0 && y < height)
        m[y][x] = ch;
}


void Canvas::FillCircle(int xc, int yc, int ray, char ch)
{
    {
        int x = ray;
        int y = 0;
        int err = 0;

        while (x >= y)
        {
            // Desenăm punctele pe circumferința cercului
            SetPixel(xc + x, yc + y, ch);
            SetPixel(xc - x, yc + y, ch);
            SetPixel(xc + x, yc - y, ch);
            SetPixel(xc - x, yc - y, ch);
            SetPixel(xc + y, yc + x, ch);
            SetPixel(xc - y, yc + x, ch);
            SetPixel(xc + y, yc - x, ch);
            SetPixel(xc - y, yc - x, ch);

            // Umplem linia curentă și linia opusă a cercului
            FillScanline(xc - x, xc + x, yc + y, ch);
            FillScanline(xc - x, xc + x, yc - y, ch);
            FillScanline(xc - y, xc + y, yc + x, ch);
            FillScanline(xc - y, xc + y, yc - x, ch);

            // Actualizăm valorile pentru următoarea iterație
            if (err <= 0)
            {
                ++y;
                err += 2 * y + 1;
            }
            if (err > 0)
            {
                --x;
                err -= 2 * x + 1;
            }
        }
    }
}
    void Canvas::FillScanline(int x1, int x2, int y, char ch)
    {
        for (int x = x1 + 1; x < x2; ++x)
        {
            SetPixel(x, y, ch);
        }
    }

void Canvas::DrawRect(int left, int top, int right, int bottom , char ch)
{
    int i = left;
    int j = top;

    // Desenăm laturile orizontale ale dreptunghiului
    for (i; i < right; i++)
    {
        SetPixel(i, top, ch);
        SetPixel(i, bottom, ch);
    }

    // Desenăm laturile verticale ale dreptunghiului
    for (j; j <= bottom; j++)  // Schimbăm condiția de oprire și decrementăm j pentru a ne deplasa în jos
    {
        SetPixel(left, j, ch);
        SetPixel(right, j, ch);
    }
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
    for (int i = left;i <= right;i++)
        for (int j = top;j <= bottom;j++)
            SetPixel(i,j,ch);
}



void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int sx = (x1 < x2) ? 1 : -1;
    int sy = (y1 < y2) ? 1 : -1;
    int err = dx - dy;

    while (x1 != x2 || y1 != y2)
    {
        SetPixel(x1, y1, ch);
        int err2 = 2 * err;

        if (err2 > -dy)
        {
            err -= dy;
            x1 += sx;
        }

        if (err2 < dx)
        {
            err += dx;
            y1 += sy;
        }
    }

    SetPixel(x2, y2, ch);
}

void Canvas::Print()
{
    
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%c ",static_cast<char>(m[i][j]+0));
        }
        printf("\n");
    }
}
void Canvas::Clear()
{
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            m[i][j] = ' ';
        }
       
    }
}
