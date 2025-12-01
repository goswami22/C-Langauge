// problem 2: Write a program to print the multiplication table of a given number in reverse order. 

#include <stdio.h>

int main() {
    int n;
    printf("Enter Number Here\n");
    scanf("%d", &n);
    for(int i = 10; i >= 1; i--) {
        printf("%d X %d = %d\n", n, i, n*i);
    }

    return 0;
}