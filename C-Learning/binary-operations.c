#include <stdio.h>

int main(){
    int hex = 0x87654321;
    int w = 32;

    printf("A:%0x\n", hex & 0xff);
    printf("B:%0x\n", ~hex & 0xffffff00 | 0x21);
    printf("C:%0x\n", hex | 0xff);

    //shift operator in C

    //left shifting will fill the right side with 0
    printf("shift left:%0x\n", hex << 8);
    printf("shift right:%0x\n", hex >> 8);
    //right shifting either fils the right side with 0 or with the same most significant number
    //each time (in this example it put an f 1111)
    // Shift operations associate from left to right, so x << j << k is equivalent to (x << j) << k.

    //apparently it is not standard what happens with right shifting 
    //but every compiler does the right shifting where you add 1 at the left if the data is signed
    //and they will add 0s at the left when the data is unsigned what a mess (arithmetic and logical shifting respectively)

    //the number in the right side of the shift operators is in bits not bytes
    //shift amounts should be kept less than the word size
    //otherwise strange things happen say w=32 then if we do << 32 the effect no left shift 
    //but if we did << 36 we would left shift by 4 this behavior is not defined tho so 
    //we should avoid this 

    //shift operators also have lower precedence than addition and subtraction 
    //

    return 0;
}
