// Write a program to print all natural numbers from 1 to n using do-while loop and for loop.

#include <stdio.h>

int main() {
    int i  = 1; // Initialize i to 1 starting from the first natural number
    int n;      // Variable to hold the upper limit input by the user
    printf("Enter number\n");
    scanf("%d", &n);    
    do
    {
        printf("The value of i is: %d\n", i);
        i++;
    } while (i <= n);        
    
    // using for loop
     // Initialize a to 1 starting from the first natural number
    int count;
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}