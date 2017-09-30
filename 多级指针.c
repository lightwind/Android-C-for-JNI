#include <stdio.h>
#include <stdlib.h>

/**
多级指针 
*/

main(){
	
	// 定义一个int类型的变量，并且赋值为100 
	int i = 100; 
	// 定义一个int类型的一级指针变量address1，并且将i的地址赋值给address1 
	int* address1 = &i; 
	// 定义一个int类型的二级指针变量address2，并且将address1的地址赋值给address2 
	int** address2 = &address1; 
	// 定义三级指针 
	int*** address3 = &address2; 
	// 定义四级指针 
	// int**** address4 = &address3;
	
	// 多级指针取值 ****address4得到的值是100 
	// printf("****address4 == %d\n",****address4);
	// printf("***address4 == %#x\n",***address4);
	
	printf("***address3 == %d\n",***address3);
	
	// ****address4 = 3000;
	// printf("****address4 == %d\n",****address4);
	
	***address3 = 3000;
	printf("***address3 == %d\n",***address3);
	
	system("pause");
}
