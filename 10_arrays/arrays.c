/*
    Arrays
*/

#include <stdio.h>
#define SIZE 11

int main (void){
    
int c[5] = {-45, 6, 0, 72, 1543};
int sum = c[0] + c[2];

printf("%d\n", sum);

double d_arry[SIZE] = {0.0};
d_arry[5] = 4.53;
printf("%.2lf and %.2lf\n", d_arry[1], d_arry[SIZE-1]);
    return 0;
}