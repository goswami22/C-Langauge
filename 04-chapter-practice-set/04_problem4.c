// problem 4 : Write a program to calculate the sum of first ten natural numbers using a while loop.

#include <stdio.h>

int main() {
    int i = 1;  
    int sum = 0;                //starting from the first natural number
    while (i <= 10)             // edning condition -  Loop continuation condition
    {
        printf("%d\n", i);
        sum += i;                // sum = sum + i;
        i++;                     // Loop variable update   
    }
    printf("The sum of first ten natural value is : %d\n", sum);
    return 0;
}