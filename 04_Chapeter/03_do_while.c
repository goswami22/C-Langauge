#include <stdio.h>

int main() {
    int a = 1;          // Loop variable initialization  - starting point
    do {
        printf("%d\n", a);
        a++;          // Loop variable update - increment/decrement
    } while(a<= 10);    // Loop continuation condition - ending point
    return 0;
}