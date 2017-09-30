#include <stdio.h>
#include <stdlib.h>

/**
返回多个值 
*/
void close(int* a,int* b){
	*a = 0;
	*b = 0;
} 

main(){
	
	// 一键关闭GPS和WIFI
	// 1表示开，0表示关 
	
	int a = 1;
	int b = 1; 
	
	printf("a == %d\n",a); 
	printf("b == %d\n",b);
	
	close(&a, &b);
	
	printf("a == %d\n",a);
	printf("b == %d\n",b);
	
	system("pause");
}
