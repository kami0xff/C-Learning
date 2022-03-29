#include <stdio.h>
int main()
{
    // two different ways to represent integer types one for signed and one for unsigned
    //

    // in signed 64 bit numbers the negative section is 1 larger than the positive section they are
    // asymmetric

    // 2^w - 1 is the max number that can be represented with w bits
    // with unsigned data types there is only one representation for each decimal value
    //  11 = 1011
    // this is the uniqueness of unsigned property
    // binary to unsigned is a bijection you can go from binary to unsigned and unsigned to binary

    // Two's complement Encodings
    // we often need negative numbers as well this is were two's complement comes in
    // this encoding makes the most significant bit of the word have the effect of a sign bit
    // or a negative weight
    // if the first bit is a 1 then the number is negative if it is not set or 0 it is positive
    //
    // in hex that would be anything starting with 7 or lower as the highest order number is positive
    // 0x8F23EC would be negative number
    // 0x7FFFF would be a positive number

    // the first bit is the only bit with negative weight meaning that the largest negative number is
    // 0x8000000... or 1000000....
    // and the largest postive value is 0x7FFFFFFF... or 011111111....
    //  0 is 0x000000... and -1 is 0xFFFFFFF...

    // the first bit is the only negative weight so if we have 1011 then we do -8 + 2 + 1 = -5 the other bit contribute
    // positively to the total

    // this is why it is assymetric if we take w=4 1000 = -8 which is the min and 0111 = 7 is the max
    // in two's complement we do -2^w-1 for the min and 2^w-1 - 1 for the max
    // or Tmin = Tmax + 1
    // this property arrises because 0 is considered non negative
    // and the unsigned encoding max is therefore Umax = Tmax*2+1

    // to get any number x's negative form with two's complement we need to do : 2^w - x

    // THERE are alternative representations for signed numbers although almost every machine uses two's complement now
    // Ones' complement
    // Sign magnitude

    printf("test\n");
    short int v = -12345;
    unsigned short uv = (unsigned short)v; //casting 2 bytes negative number to 2 bytes unsigned number 
    printf("v = %d, uv = %u\n", v, uv);
    //on my machine which is little endian intel 64 bit machine that i assume uses two's complement 
    int test = 0xFFFFFFFF; //this is the same as TMIN here its 1111 1111  1111 1111 1111 1111 1111 1111 
    int minone = -1; //and if i look in memory how this -1 is stored i will see this two's complement
    printf("test value %d\n",test);
    //yes this printed -1 so i am indeed using two's complement on my machine 

    return 0;
}