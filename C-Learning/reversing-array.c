#include <stdio.h>

void inplace_swap(int* x ,int* y)
{
    *y = *x ^ *y; /*Step1*/
    *x = *x ^ *y; /*Step2*/
    *y = *x ^ *y; /*Step3*/
}

void reverse_array(int a[], int count){
    int first; 
    int last;
    for(first = 0, last = count-1; first < last; first++, last--){ //why <= if first == last
        inplace_swap(&a[first], &a[last]);
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    reverse_array(arr, 5);
    for(int i = 0; i < 5; i ++){
        printf("%d", arr[i]);
    }

    //block scoping test it works but in js would it work with let ??
    //why is arr accessible inside the for loop whilst i is not accessible after the for loop
    //hmm i see because the scope of i ends with the for loop whilst the scope of arr ends with the
    //main function because that is the context in which it is declared and initialized
    {
        // printf("%d", arr[0]);
        {
            // printf("%d", arr[0]);
        }

    }
    return 0;
}