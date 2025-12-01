// Foctorail Number: Write a program to calculate the factorial of a given number.

#include <stdio.h>

int main() {
    // 8! = 1 x 2 x 3 x 4 x 5 x 6 x 7 x 8 = 40320;

    int product = 1;        // to store the factorial result        
    int n = 8;              // number to calculate factorial of 
    for ( int i = 1; i <= n; i++)       // loop variable initialization, Loop continuation condition, Loop variable update
    {
        product *= i;
    }
    
    printf("The factorial of %d is %d\n", n , product);

    // using while loop
    int factorial_num = 1;  // to store the factorial result      
    int n1 = 10;        // number to calculate factorial of

    int i = 1;        // loop variable initialization   starting from 1
    while (i <= n)    // Loop continuation condition
    {
        factorial_num *= n1;        // factorial_num = factorial_num * n1;      
        i++;                // Loop variable update 
    }
    printf("The factorial of %d is %d\n", n , factorial_num);
    return 0;
}