// Pointers

#include <stdio.h>

int main (void){
    int luck = 10;

    // Print the value of luck
    printf("Luck is %d\n", luck);
    
    luck += 5;

    // Print the address of a variable luck
    printf("The address of luck is %p\n", &luck); //%p - prints the address

    // Create pointer variable (variable that stores an address)
    // <data type> *pointer_name;

    int *luckPtr; // uninitialized pointer (DON'T DO THAT)

    // 1 NULL pointer
    luckPtr = NULL;

    // 2 assign with an adress
    luckPtr = &luck;

    // Access the data through the pointer
    // * - dereferencing operator
    printf("Dereference luckPTR %d\n", *luckPtr); // Indirect access

    // Create a double variable named score
    // Create a pointer pointing to it
    double score = 15.3;
    double *scorePtr = &score;

    // Modify the score through the pointer
    *scorePtr = 20.9;
    printf("score %lf\n", score);

    return 0;
}