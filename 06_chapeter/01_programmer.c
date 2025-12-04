// Function Declaration and Definition in C

#include <stdio.h>

int sum(int, int);              // Function declaration prototype

int sum(int x, int y) {         // Function definition
    return x + y;               // Return statement
}

// Function 2: 
float sum_float(int, float);     // Function declaration prototype

float sum_float(int a, float b) {
    return a + b;
}

// function 3
float multi(int , float);  // Function declaration prototype

float multi(int m, float n){    // Function definition
    return m * n;
}





int main() {

    int c = sum(10, 20); // Function call  
    printf("The value of integer number is %d\n", c);


    int d = sum(5, 15); // Function call without return value usage
    printf("The value of integer number is %d\n", d);

    // function 2 call
    float e = sum_float(5, 4.5); // Function call
    printf("The value of Float number is %f\n", e);

    // function 3 call
    float f = multi(5,5.5); // Function call
    printf("The valuer of Multiplication is %f\n", f);

    return 0;
}