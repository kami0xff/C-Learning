
//take data word x and mask m 
//result z with bits of x modified by mask m 
//bis set z to 1 where m is 1 so this looks like OR
//bic set z to 0 at each position where m is 1 so this looks like NOT 
//
#include <stdio.h>

int bis(int x, int m){
    return x | m;
}
int bic(int x, int m){
    return x & (~m);
}

/* Compute x|y using only calls to functions bis and bic */
int bool_or(int x, int y) {
int result = bis(x,y);
    return result;
}
/* Compute x^y using only calls to functions bis and bic */
int bool_xor(int x, int y) {
int result = bis(bic(x,y),bic(y,x)); //
    return result;
}

int main(){

    printf("1 OR 2 = 3 : %d\n",bool_or(1,2));
    printf("1 XOR 3 = 2 : %d\n",bool_xor(1,3));

    return 0;
}
