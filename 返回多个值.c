#include <stdio.h>
#include <stdlib.h>

/**
���ض��ֵ 
*/
void close(int* a,int* b){
	*a = 0;
	*b = 0;
} 

main(){
	
	// һ���ر�GPS��WIFI
	// 1��ʾ����0��ʾ�� 
	
	int a = 1;
	int b = 1; 
	
	printf("a == %d\n",a); 
	printf("b == %d\n",b);
	
	close(&a, &b);
	
	printf("a == %d\n",a);
	printf("b == %d\n",b);
	
	system("pause");
}
