#include <stdio.h>
#include <stdlib.h>

/**
��̬�ڴ���� 
��ϵͳ����ͻ��� 
*/

void function(int** address){
	int i = 100;
	// ��i�ĵ�ֵַ��ֵ�������ָ����� 
	*address = &i;
}

main(){
	
	// ����int���͵�һ��ָ�����iPoint 
	int* iPoint;
	
	function(&iPoint); 
	printf("*iPoint == %d\n",*iPoint);// 100 
	printf("*iPoint == %d\n",*iPoint);// 0
	printf("*iPoint == %d\n",*iPoint);// 0
	
	system("pause");
}
