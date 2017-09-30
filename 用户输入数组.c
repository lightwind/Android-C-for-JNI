#include <stdio.h>
#include <stdlib.h>

/**
用户输入数组 
*/

main(){
	
	printf("请输入数组的长度\n");
	// 1、用户输入数组的长度
	int length;
	scanf("%d",&length);
	printf("输入的数组长度为：%d\n",length);
	// 2、根据用户输入的长度创建数组
	int iArray[length];
	// 3、让用户一次填充数组的值
	int i;
	for(i = 0;i < length; i++){
		printf("请输入iArray[%d]的值：\n",i);
		scanf("%d",iArray + i);
	}
	// 4、把值遍历取出打印出来
	for(i = 0;i < length; i++){
		printf("iArray[%d]的值 == %d\n",i, iArray[i]);
	}
	
	system("pause");
}
