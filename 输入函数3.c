#include <stdio.h>
#include <stdlib.h>

/**
输入函数3：
scanf("占位符",内存地址);

%d -- nt
%ld -- long int
%c -- char
%f -- float
%u -- 无符号数
%hd -- 短整型
%lf -- double
%x -- 十六进制输出 int 或者long int 或者 short int
%o -- 八进制输出
%s -- 字符串 
*/

main(){
	
	// 输入一个字符序列
	// 输入数组：C语言中没有字符串，但可以用char数组表示，char数组的写法和for循环的写法，并打印
	char cArray[] = {'a','b','c','d','e','\0','A','B'};// \0代表结束，后面的AB就无法输入 
	// 数组是一块连续的内存空间 
	
	printf("cArray == %s\n", cArray);
	
	// char类型的指针 
	char* test = "I Love You!!";
	printf("test == %s\n",test); 
	 
	system("pause");
}
