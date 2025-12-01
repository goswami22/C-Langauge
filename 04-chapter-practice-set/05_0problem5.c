// problem 5 : Write a program to calculate the sum of occring in the multiplication table of 8 using for loop.

#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum += (8 * i);
    }
    printf("the value of sum is: %d\n", sum);
    
    return 0;
}