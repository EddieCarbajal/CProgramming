#include <stdio.h>
#define SIZE 10 

// Function Prototype
void printArray (const int *a, int size);

int main (void){
    int a[SIZE] = {1,2,3,4,5,6,7,8};
    int b[SIZE] = {123,456,789};

    printf("%d\n", *a);

    printArray(a, SIZE);
    printArray(b, SIZE);

    return 0;
}

void printArray (const int *a, int size){
    for (int i = 0; i < size; i++){
        printf("%d ", a[i]);
        //  a[i] = 0; <==== Not allowed because array (a[]) is constant
    }
    puts(" ");

}