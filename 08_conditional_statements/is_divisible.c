/*
    ! - logical NOT
*/

#include <stdio.h>
#include <stdbool.h>

bool is_divisible_both (int first, int second);
bool is_correct_input (int first, int second);

int main (void){
    printf("Enter x and y");
    int x = 0;
    scanf("%d", &x);
    int y = 0;
    scanf("%D", &y);
    
    
    return 0;
}

bool is_divisible_both (int first, int second){
    if (first % second == 0 && first % (second - 3) == 0){
        return true;
    }
    else {
        return false;
    }
}

bool is_correct_input (int first, int second){

}