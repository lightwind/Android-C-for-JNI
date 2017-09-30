#include <stdio.h>
#include <stdlib.h>

/**
静态内存分配 
由系统分配和回收 
*/

void function(int** address){
	int i = 100;
	// 将i的地址值赋值给传入的指针变量 
	*address = &i;
}

main(){
	
	// 定义int类型的一级指针变量iPoint 
	int* iPoint;
	
	function(&iPoint); 
	printf("*iPoint == %d\n",*iPoint);// 100 
	printf("*iPoint == %d\n",*iPoint);// 0
	printf("*iPoint == %d\n",*iPoint);// 0
	
	system("pause");
}
