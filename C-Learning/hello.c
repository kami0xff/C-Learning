#include <stdio.h>
#include <time.h>
#include <stdlib.h>



void createVar(){
	int r = rand();  
	createVar();
}

int main() {
	int var = 3;
	srand(time(NULL));
	printf("hello world");
	createVar();
	return 0;
}

