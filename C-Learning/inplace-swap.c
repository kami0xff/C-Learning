#include <stdio.h>

void inplace_swap(int* x ,int* y)
{
    *y = *x ^ *y; /*Step1*/
    *x = *x ^ *y; /*Step2*/
    *y = *x ^ *y; /*Step3*/
}

int main(){
    int x = 5;
    int y = 10;
    inplace_swap(&x,&y);

    printf("X: %d", x);
    printf("Y: %d", y);

    return 0;
}

//im not sure i understand thins example when i perform the XOR myself i don't get the right result
//but it works as intended when i run the program. 
//really not sure 