/*

    You cannot create a funcion inside another function

*/

#include <stdio.h>

// Create a function that doesn't return any value and doesn't take any values
void print_course (void) { // function header
    printf("You are in COP2271\n");
}

// A function that doesn't return any value atakes an integer
void print_course_with_number (int course_number) {
    if (course_number == 2271) { // Double equal sign (==) checks if course_number is equal to 2271, if single equals sign (=) is used, 
                                 // course_number will be assigned 2271 and will always be true since it is not 0
        printf("You are in the best %d course\n", course_number);    
    }
    else{
        printf("You are in %d course\n",course_number);
    }

}

// main function
int main (void){
    // To use a function I need to call it
    print_course();

    print_course_with_number(1234); // Integer inside the argument gets assigned to course_number
    int number = 2271;
    print_course_with_number(number);
    
    return 0;
}