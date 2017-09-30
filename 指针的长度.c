#include <stdio.h>
#include <stdlib.h>

/**
指针的长度，指针的长度是8个字节 
*/

main(){
	
	int* iPoint;
	char* cPoint;
	
	printf("iPoint的长度 == %d\n",sizeof(iPoint));
	printf("cPoint == %d\n",sizeof(cPoint));
	
	system("pause");
}
