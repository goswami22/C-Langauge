//  Write a program to demonstrate the use of break and continue statements in a for loop.

#include <stdio.h>

int main() {
    // int count = 10;
    for ( int i = 0; i < 10; i++)           // Loop variable initialization, Loop continuation      condition, Loop variable update  
    {
        // if(i == 5) {
        //     break;                          // Exit the loop when i equals 5 (Exit the loop now)
        // }

        if(i == 5) {
            continue;                       // Skip the current iteration when i equals 5 (Skip this iteration)
        }
        printf("%d\n", i);
    }
    
    return 0;
}