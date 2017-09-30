#include <stdio.h>
#include <stdlib.h>

/**
动态内存分配 
*/

void function(int** address){
	
	int i = 100;
	
	int* temp;
	
	// malloc(int)--返回一块内存地址
	temp = malloc(sizeof(int)); 
	
	// 将i对应的值赋值给temp地址对应的值 
	*temp = i;
	
	// 将address对应的地址对应的值修改成temp
	// 二级指针前面加一个*表示一级指针的地址 
	*address = temp;
	
	free(temp);
}

main(){
	
	// 定义int类型的一级指针变量iPoint 
	int* iPoint;

	function(&iPoint); 				// free(temp)前   后 
	printf("*iPoint == %d\n",*iPoint);// 100          11342384
	printf("*iPoint == %d\n",*iPoint);// 100          1867540778
	printf("*iPoint == %d\n",*iPoint);// 100          1867540778
	
	system("pause");
}
