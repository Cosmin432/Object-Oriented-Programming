#include <iostream>
using namespace std;



int f(const char *str) {
    int res = 0;
   
    int i = 0;
   
    for (int i = 0; str[i] != '\0'; ++i)
        res = res * 10 + str[i] - '0';

    
    return res;
}

int main() {
    FILE *file;
    char line[100];
    int sum = 0;

    
    file = fopen("in.txt", "r");

    
    if (file == NULL) {
        printf("Nu am putut deschide\n");
        return 1;
    }

    
    while (fgets(line, sizeof(line), file) != NULL) {
        
        int number = f(line);
       
        sum += number;
    }

   
    fclose(file);

   
    printf("Sum of numbers in file: %d\n", sum);

    return 0;
}
