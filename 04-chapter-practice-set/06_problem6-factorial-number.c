// Foctorail Number: Write a program to calculate the factorial of a given number.

#include <stdio.h>

int main() {
    //10! = 1 x 2 x 3 x 4 x 5 x 6 x 7 x 8 x 9 x 10 = 3628800;
    // 9! = 1 x 2 x 3 x 4 x 5 x 6 x 7 x 8 x 9 = 362880;
    // 8! = 1 x 2 x 3 x 4 x 5 x 6 x 7 x 8 = 40320;
    /// 7! = 1 x 2 x 3 x 4 x 5 x 6 x 7 = 5040;

    int product = 1;        // to store the factorial result        
    int n = 8;              // number to calculate factorial of 
    for ( int i = 1; i <= n; i++)       // loop variable initialization, Loop continuation condition, Loop variable update
    {
        product *= i;
    }
    
    printf("The factorial of %d is %d\n", n , product);

    // using while loop
    int factorial_num = 1;  // to store the factorial result      
    int n1 = 8;        // number to calculate factorial of

    int i = 1;        // loop variable initialization   starting from 1
    while (i <= n1)    // Loop continuation condition
    {
        factorial_num *= i;        // factorial_num = factorial_num * n1;      
        i++;                // Loop variable update 
    }
    printf("The factorial of %d is %d\n", n1 , factorial_num);

    // using do while loop
    int fact_num1 = 1;  // to store the factorial result = 
    int num2 = 12;
    int j = 1;
    do {
        fact_num1 *= j;
        j++;
    } while (j <= num2);

    printf("The factrial number value of %d is %d\n", num2, fact_num1);

    return 0;
}

