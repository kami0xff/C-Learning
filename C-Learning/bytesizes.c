#include <stdio.h>
#include <stdint.h>
int main(){
    //integral types
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(unsigned int));
    printf("%lu\n", sizeof(short));
    printf("%lu\n", sizeof(unsigned short));
    printf("%lu\n", sizeof(long));
    printf("%lu\n", sizeof(unsigned long));

    printf("%lu\n", sizeof(int32_t));
    printf("%lu\n", sizeof(uint32_t));
 
    printf("%lu\n", sizeof(int64_t));
    printf("%lu\n", sizeof(uint64_t));

    printf("%lu\n", sizeof(size_t)); //is size_t the word size of the system ??
    //these fixed type representations are better 

    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(unsigned char));


    //pointer size == word size because it should be able to store the max virtual memory address
    printf("%lu\n", sizeof(char*));
    //a variable declared as being of type char * uses the full word size of the program

    //floating point precision types
    printf("%lu\n", sizeof(float)); //single precision
    printf("%lu\n", sizeof(double)); //double precision

    return 0;
}

//an important aspect fo portable code is to make it insensitive to the particular sizes
//of certain data types
//really the biggest change from 32 bit word programs and 64 bit word programs is the size of the pointer
//