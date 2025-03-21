#include "header.h"

int Sum(int a, int b) { return a + b; }
int Dif(int a, int b) { return a - b; }
int Mul(int a, int b) { return a * b; }
int Div(int a, int b) { return a / b; }

int main(int argc, char* argv[])
{
    char input[7] = "-*++/";
    func Operatori[4] = {Sum, Dif, Mul, Div};
    int S = 0; 
    Content x = {15,15}; 
    double idx;

    for (int i = 0; i < strlen(input); i++) 
    {
        switch (input[i])
        {
            case '-':
                idx = 2;
                x.p1 = 3;
                x.p2 = 3;
                break;
            case '+':
                idx = 0;
                x.p1 = 7;
                x.p2 = 5;
                break;
            case '*':
                idx = 1;
                x.p1 = 10;
                x.p2 = 1;
                break;
            case '/':
                idx = 3;
                x.p1 = 8;
                x.p2 = 4;
                break;
        }

        S = S + Operatori[(int)idx](x.p1, x.p2);
    }

    //S=337
    
    printf("S = %d\n", S); 

    return 0;
}