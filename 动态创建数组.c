#include <stdio.h>
#include <stdlib.h>

/**
动态数组的创建
1、让用户输入一个长度
2、根据长度，分配内存空间
3、让用户把数组中的元素依次的赋值
4、接收用户输入扩展数组长度
5、根据扩展的长度重新分配空间
6、把扩展长度的元素让用户赋值
7、输出数组

malloc(长度);

realloc(数组，长度)重新分配空间
*/

main(){
	
	printf("请输入要创建的数组的长度：\n"); 
	
	// 1、让用户输入一个长度
	int length;
	scanf("%d", &length);
	printf("输入的数组长度为：%d\n",length); 
	
	// 2、根据长度，分配内存空间
	int* iArray = malloc(length * 4);
	
	// 3、让用户把数组中的元素依次的赋值
	int i;
	for(i = 0; i< length; i++){
		printf("输入第iArray[%d]的值：",i);
		scanf("%d",iArray + i);
	}
	
	// 4、接收用户输入扩展数组长度
	printf("请输入要扩展的数组的长度：\n"); 
	int suppLength;
	scanf("%d", &suppLength);
	printf("扩展的长度为：%d\n",suppLength); 
	
	// 5、根据扩展的长度重新分配空间
	iArray = realloc(iArray, (length + suppLength) * 4); 
	
	// 6、把扩展长度的元素让用户赋值
	for(i = length; i< (length + suppLength); i++){
		printf("输入第iArray[%d]的值：",i);
		scanf("%d",iArray + i);
	}
	
	// 7、输出数组
	for(i = 0; i< (length + suppLength); i++){
		// printf("iArray[%d] = %d\n",i, iArray[i]);
		printf("iArray[%d] = %d\n",i, *(iArray + i));
	}
	
	system("pause");
}
