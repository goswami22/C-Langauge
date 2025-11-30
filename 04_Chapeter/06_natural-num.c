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
    
    return 0;
}