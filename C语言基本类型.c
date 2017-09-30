#include <stdio.h>
#include <stdlib.h>

/**
C语言的基本类型：
char，int，float，double，long，short，signed，unsigned，void
计算类型的长度：sizeof("类型")返回int类型的长度
占位符：int类型的占位符是：%d
printf("输出内容"); 

Java基本数据类型和C语言类型的一些区别：
1、Java中char类型的长度为2个字节，C语言中为1个字节
2、Java中long类型的长度为8个字节，C语言中为4个字节
	C99标准规定：long类型的规定，不小于整型。 
3、C语言中没有byte
4、C语言中没有boolean，用0表示false，非0表示true 

signed：有符号：-128~127之间。 
unsigned：无符号：用于表示一个正数：0~255之间。
void：无类型，也是代表任意类型 
*/ 

int main()
{
	
	// int size = sizeof(int);
	// printf("int类型的长度是：%d\n",size); 
	
	printf("int类型的长度是：%d\n",sizeof(int)); 
	printf("char类型的长度是：%d\n",sizeof(char)); 
	printf("float类型的长度是：%d\n",sizeof(float)); 
	printf("long类型的长度是：%d\n",sizeof(long)); 
	printf("short类型的长度是：%d\n",sizeof(short)); 
	
	if(1){
		printf("true\n");
	}else{
		printf("false\n");
	}
	
	system("pause");
	return 0;// 默认将可以不写返回值	
}
 
