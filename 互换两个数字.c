#include <stdio.h>
#include <stdlib.h>

/**
互换两个数字 
*/

void sitch(int a,int b){// 传值无法交换 
	int temp = a;
	a = b;
	b = temp;
	
	printf("a的地址2 == %#x\n",&a);
	printf("b的地址2 == %#x\n",&b);
}

void sitch2(int* a,int* b){// 传地址可以交换 
	int temp = *a;
	*a = *b;
	*b = temp;
	
	printf("a的地址3 == %#x\n",a);// 这里的a,b已经是地址 
	printf("b的地址3 == %#x\n",b);
}

main(){
	
	int a = 100;
	int b = 200; 
	
	printf("a的地址1 == %#x\n",&a);
	printf("b的地址1 == %#x\n",&b);
	
	printf("a == %d\n",a);
	printf("b == %d\n",b);
	
	sitch2(&a, &b);	
	
	printf("a == %d\n",a);
	printf("b == %d\n",b);
	
	system("pause");
}
