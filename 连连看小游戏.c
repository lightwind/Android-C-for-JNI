#include <stdio.h>
#include <stdlib.h>

/**
指针就是内存地址
内存地址就是指针 
*/

main(){
	printf("游戏开始：\n");
	
	int i;
	for(i = 100; i > 0; i--){
		
		_sleep(1000);// 不同的电脑写法不同，有的是 _sleep(1000)，有的是sleep(1000)，或者Sleep(1000) 
		
		printf("还剩多少秒：%d\n",i);
		
	} 
	
	printf("恭喜赢了\n");
	
	system("pause");
}
