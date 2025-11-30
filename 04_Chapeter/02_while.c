#include <stdio.h>

int main() {
    int a = 1;          // Loop variable initialization  - starting point
    int count = 10;
    // while(a <= 100) {
    //     printf("%d\n", a);
    //     a++;
    // }

    while (a <= count)          // Loop continuation condition - ending point
    {   
        // if (a == 8 )
        // {
        //     continue;
        // }
        
        printf("%d Happy Birthday!\n", a);
        a = a + 1;                  // Loop variable update - increment/decrement
    }
    



    return 0;
}