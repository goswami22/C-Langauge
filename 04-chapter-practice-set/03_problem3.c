// problem3 : Write a program to calculate the sum of first 10 natural numbers using a for loop.

#include <stdio.h>

int main() {
    int sum= 5;
    for(int i = 0; i <= 10; i++) 
    {
        sum = sum + i;
    }
    printf("the valu of sunm is : %d\n" , sum);                                    
    return 0;
}