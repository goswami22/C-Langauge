#include <stdio.h>

void good_morning();        // Function declaration prototype
void good_afternoon();
void good_evening();

void good_morning() {           // Function definition
    printf("Good morning!\n");
}
void good_afternoon() {
    printf("Good afternoon!\n");
}
void good_evening() {
    printf("Good evening!\n");
}


int main() {
    good_morning();         // Function call
    good_afternoon();
    good_evening();
    return 0;
}