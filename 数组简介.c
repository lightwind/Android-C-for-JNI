#include <stdio.h>
#include <stdlib.h>

/**
数组的简单介绍
1、数组的取值
2、数组的取地址
3、数组是一块连续的内存控件
4、数组的首元素的地址和数组的地址相同 
4、数组的设计
5、 
*/

main(){
	
	char cArray[] = {'H','E','L','L','O'};
	int iArray[] = {1, 2, 3, 4, 5};
	
	// 取数组的值
	printf("cArray[0] == %c\n",cArray[0]); 
	printf("cArray[1] == %c\n",cArray[1]); 
	
	// 取数组的内存地址值
	printf("cArray[0]地址 == %#x\n",&cArray[0]); // 0x62fe40 // 按照数据类型的大小一次累加，所以数组是一块连续的内存控件
	printf("cArray[1]地址 == %#x\n",&cArray[1]); // 0x62fe41
	printf("cArray[2]地址 == %#x\n",&cArray[2]); // 0x62fe42
	printf("cArray[3]地址 == %#x\n",&cArray[3]); // 0x62fe43
	
	printf("iArray地址 == %#x\n",&iArray);// 0x62fe20 // 数组的首元素的地址和数组的地址相同 
	printf("iArray[0]地址 == %#x\n",&iArray[0]); // 0x62fe20
	printf("iArray[1]地址 == %#x\n",&iArray[1]); // 0x62fe24
	
	// 用指针去取值
	// 这里是因为数组是一块连续的内存空间，这里在取到值后，再加上一个值，正好将指针指向下一个位置的值，因此也能取到值 
	printf("iArray == %d\n",*iArray); 
	printf("iArray[0] == %d\n",*iArray + 0); 
	printf("iArray[1] == %d\n",*iArray + 1); 
	printf("iArray[2] == %d\n",*iArray + 2); 
	printf("iArray[3] == %d\n",*iArray + 3); 
	
	
	// 这是是根据下标去取值
	printf("iArray[0] == %d\n",*(iArray + 0)); 
	printf("iArray[1] == %d\n",*(iArray + 1)); 
	printf("iArray[2] == %d\n",*(iArray + 2)); 
	printf("iArray[3] == %d\n",*(iArray + 3)); 
	
	system("pause");
}
