#include <stdio.h>
#include <stdlib.h>

/**
������������ 
*/

void sitch(int a,int b){// ��ֵ�޷����� 
	int temp = a;
	a = b;
	b = temp;
	
	printf("a�ĵ�ַ2 == %#x\n",&a);
	printf("b�ĵ�ַ2 == %#x\n",&b);
}

void sitch2(int* a,int* b){// ����ַ���Խ��� 
	int temp = *a;
	*a = *b;
	*b = temp;
	
	printf("a�ĵ�ַ3 == %#x\n",a);// �����a,b�Ѿ��ǵ�ַ 
	printf("b�ĵ�ַ3 == %#x\n",b);
}

main(){
	
	int a = 100;
	int b = 200; 
	
	printf("a�ĵ�ַ1 == %#x\n",&a);
	printf("b�ĵ�ַ1 == %#x\n",&b);
	
	printf("a == %d\n",a);
	printf("b == %d\n",b);
	
	sitch2(&a, &b);	
	
	printf("a == %d\n",a);
	printf("b == %d\n",b);
	
	system("pause");
}
