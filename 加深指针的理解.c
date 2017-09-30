#include <stdio.h>
#include <stdlib.h>

/**
指针就是内存地址
内存地址就是指针 
*/

main(){
	
	int i = 100;
	
	int* p = &i;
	
	// 测试1：如果修改i值，p值有没有变化---不变 
	// printf("修改i值前，p的值 == %#x\n",p);
	// i = 200; 
	// printf("修改i值后，p的值 == %#x\n",p);
	
	// 测试2：如果修改p值，i值有没有变化---不变 
	// printf("修改p值前，i的值 == %d\n",i);
	// int j = 200;
	// p =  &j;
	// printf("修改p值后，i的值 == %d\n",i);
	
	// 测试3：如果修改i值，*p有没有变化---修改后*p变成200 
	// printf("修改i值前，*p的值 == %d\n",*p);
	// i = 200; 
	// printf("修改i值后，*p的值 == %d\n",*p);
	
	// 测试3：如果修改*p值，i的值有没有变化---修改后i变成300 
	printf("修改*p值前，i的值 == %d\n",i);
	*p = 300; 
	printf("修改*p值后，i的值 == %d\n",i);
	
	system("pause");
}
