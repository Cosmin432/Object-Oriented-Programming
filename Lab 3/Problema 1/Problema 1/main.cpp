#include <iostream>
#include "Math.h"
using namespace std;


int main() {
    Math m;
    const char* x = "123";
    const char* y = "456";

    const char* result = m.Add(x, y);
    std::cout << result << std::endl;

    delete[](result - 1);

    return 0;
}