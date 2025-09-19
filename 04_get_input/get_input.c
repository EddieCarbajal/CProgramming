/*
    Getting an input from the keyboard
    Calculate the oerimeter of a square
*/

#include <stdio.h>

int main (void){
    int square_side = 1;

    // Get the input
    // Print the prompt
    puts("Enter the side of a square");

    // Get the input
    // & - address operator <-------------- IMPORTANT IMPORTANT IMPORTANT IMPORTANT IMPORTANT 
    scanf("%d", &square_side);

    // Do the math
    int square_perimeter = square_side * 4;
    int square_area = square_side * square_side;

    printf("The permiter of a square with a side %d is %d\n", square_side, square_perimeter);
    printf("The area of a square with a side %d is %d\n", square_side, square_area);

return 0;
}