#include <stdio.h>
#include <stdlib.h>

/**
输入函数2：
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
	char cArray[5];
	
	printf("请输入Hello\n");
	
	scanf("%s",&cArray); 
	
	int j; // 在C语言中不能将字段定义在里面，只能定义在外面 
	for(j = 0; j < 5; j++){//  
		printf("cArray[%d] == %c\n", j, cArray[j]);
	}
	
		printf("cArray == %s\n", cArray);
	
	system("pause");
}
