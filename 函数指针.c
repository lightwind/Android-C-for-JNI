#include <stdio.h>
#include <stdlib.h>

/**
函数指针 -- 就是指针指向一个函数 
*/

// 定义一个函数 
int add (int x, int y){
	return x + y;
}

main(){
	
	// 定义函数指针
	int (*light)(int x, int y);
	
	// 函数指针赋值
	light = add;
	
	// 使用函数指针 
	int result = light(2, 3);
	printf("result == %d\n",result);
	
	system("pause");
}
