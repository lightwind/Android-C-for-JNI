#include <stdio.h>
#include <stdlib.h>

/**
联合体 
特点，所有的字段都是使用同一块内存空间
应用场景---各个类型之间方便转换 
*/

// 定义一个结构体 
struct Date{
	int year;
	int month;
	int day;
};

// 定义一个联合体，特点，所有的字段都是使用同一块内存空间
union Mix{
	long i;// 4个字节 
	int k;// 4个字节 
	char ii;// 1个字节 
};
 
main(){
	
	printf("date:%d\n",sizeof(struct Date));// 12
	printf("mix:%d\n",sizeof(union Mix));// 4
	
	// 实验
	union Mix m;// 操作的都是同一块内存空间，所以后面修改的会覆盖前面的修改 
	m.i = 100;
	m.k = 123;
	printf("m.i == %d\n",m.i);// 123
	printf("m.k == %d\n",m.k);// 123
	
	system("pause");
}
