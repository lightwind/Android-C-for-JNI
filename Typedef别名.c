#include <stdio.h>
#include <stdlib.h>

/**
声明自定义数据类型，配合各种原有数据类型来达到简化编程的目的的类型定义关键字。
在计算机编程语言中用来为复杂的声明定义简单的别名。 
*/

typedef int i;
typedef long l; 

main(){
	i m = 10;
	i n = 123123123;
	printf("%d\n", m);
	printf("%d\n", n);
	system("pause");
} 
