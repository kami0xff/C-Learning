#include <stdio.h>
typedef unsigned char* byte_pointer;

void show_bytes(byte_pointer start, size_t len){
    for(int i = 0; i < len; i++){
        printf("%.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x){
    show_bytes((byte_pointer) &x, sizeof(int));
}
void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}
void show_pointer(void* x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}

int main(void){
    char* str = "test";
    show_int(10);
    show_float(2.312);
    show_pointer(&str);

    //for any program object that large than a single byte (almost all program objects other than chars)
    //we must establish two things 
    //  1) what the address of the object will by 
    //  2) how we will order they bytes in memory

    //in all machines objects are stored as contiguous sequences of bytes
    //with the address of the object being the smallest address of the bytes used 

    //two ways of ordering    
    //little endian => the smallest place value first in the sequence of bytes representing a program object
    //big endian => the largest place value first in the sequence of bytes representing a program object

    //example we try to store the integer 0x01234567
    //in little endian 67 45 23 01
    //in bit endian 01 23 45 67 
    //not that in 0x01234567 we read it just like a normal number the lowest place value is 67 
    //highest order is 01

    //problems over the network little endian machine sending to big endian machine therfore a netowrk standard has been made 

    //casting a pointer in c does not change the pointer itself in anyway but it changes the 
    //way we are interpreting the byte data we are pointing to which is pretty crazy 
    //for example we had an int* which we casted to an unsigned char* in order to be able to 
    //just read the integer byte by byte because char has the sizeof 1 

    return 0;
}