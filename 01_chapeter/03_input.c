#include <stdio.h>

int main() {
    int a;
    int b;
    float c;
    int d;
    printf("Enter the value of a\n:");
    scanf("%d", &a);  // Read an integer value from user and store it in 'a' 
    printf("Enter the value of b\n:");
    scanf("%d", &b);  // Read an integer value from user and store it in 'b'
    printf("The value of c\n:");
    scanf("%f", &c);  // Read a float value from user and store it in 'c'
    printf("The valie of d\n:");
    scanf("%d", &d);  // Read an integer value from user and store it in 'd'


    printf("The sum of a,b  and c is %f\n", a + b +c );  // Print the sum of 'a' and 'b'
    printf("The Sum of a,b and d is %d\n", a + b + d);
    return 0;
}