#include <stdio.h>
#include <stdlib.h>

/**
��̬�ڴ���� 
*/

void function(int** address){
	
	int i = 100;
	
	int* temp;
	
	// malloc(int)--����һ���ڴ��ַ
	temp = malloc(sizeof(int)); 
	
	// ��i��Ӧ��ֵ��ֵ��temp��ַ��Ӧ��ֵ 
	*temp = i;
	
	// ��address��Ӧ�ĵ�ַ��Ӧ��ֵ�޸ĳ�temp
	// ����ָ��ǰ���һ��*��ʾһ��ָ��ĵ�ַ 
	*address = temp;
	
	free(temp);
}

main(){
	
	// ����int���͵�һ��ָ�����iPoint 
	int* iPoint;

	function(&iPoint); 				// free(temp)ǰ   �� 
	printf("*iPoint == %d\n",*iPoint);// 100          11342384
	printf("*iPoint == %d\n",*iPoint);// 100          1867540778
	printf("*iPoint == %d\n",*iPoint);// 100          1867540778
	
	system("pause");
}
