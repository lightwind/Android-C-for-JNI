#include <stdio.h>
#include <stdlib.h>

/**
����ָ�� -- ����ָ��ָ��һ������ 
*/

// ����һ������ 
int add (int x, int y){
	return x + y;
}

main(){
	
	// ���庯��ָ��
	int (*light)(int x, int y);
	
	// ����ָ�븳ֵ
	light = add;
	
	// ʹ�ú���ָ�� 
	int result = light(2, 3);
	printf("result == %d\n",result);
	
	system("pause");
}
