#include "Math.h"
#include <iostream>
#include <stdarg.h>

int Math::Add(int x, int y)
{
	return x + y;
}
 int Math::Add(int x, int y, int z)
{
	return x + y + z;
}
 int Math::Add(double x, double y)
{
	return x + y;
}
 int Math::Add(double x, double y, double z)
{
	return x + y + z;
}
 int Math::Mul(int x, int y)
{
	return x * y;
}
 int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}
 int Math::Mul(double x, double y)
{
	return x * y;
}
 int Math::Mul(double x, double y, double z)
{
	return z * x * y;
}
 int Math::Add(int count, ...)
{
    va_list args;
    va_start(args, count);

    int sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += va_arg(args, int);
    }

    va_end(args);

    return sum;
}
 char* Math::Add(const char* x, const char* y)
{
     size_t len_x = std::strlen(x);
     size_t len_y = std::strlen(y);
     size_t len_max = len_x > len_y ? len_x : len_y;

     char* result = new char[len_max + 2]; // +2 to accommodate for possible carry

     int carry = 0;
     int i = len_x - 1;
     int j = len_y - 1;
     int k = len_max;
     result[k + 1] = '\0'; // Null-terminate the string

     while (i >= 0 || j >= 0) {
         int sum = carry;
         if (i >= 0)
             sum += x[i--] - '0';
         if (j >= 0)
             sum += y[j--] - '0';

         result[k--] = (sum % 10) + '0';
         carry = sum / 10;
     }

     if (carry) {
         result[0] = carry + '0'; // Insert the carry at the beginning
         return result;
     }
     else {
         char* trimmed_result = result + 1; // Skip the first character
         delete[] result;
         return trimmed_result;
     }
}
