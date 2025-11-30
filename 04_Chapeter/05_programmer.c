#include <stdio.h>

int main() {
    int i = 0;

    // Using while loop print values from 0 to 20
    // while (i <= 20)
    // {
    //     if (i >= 10)
    //     {
    //         printf("The valur of i is: %d\n", i);
    //     }
    //     i++;
        
    // }

    // useing do while loop print values from 0 to 20
    // do{
    //     if(i >= 10) 
    //     {
    //         printf("The value of i is : %d\n", i);
    //     }
    //     i++;
    // } while (i <= 20);
    
    // using for loop print values from 0 to 20
    for(i = 0; i<= 20; i++){
        if(i >= 10) {
            printf("The value of i is : %d\n", i);
        }
    } 

    return 0;
}