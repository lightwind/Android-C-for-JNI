#include <stdio.h>
#include <stdlib.h>

/**
ָ������ڴ��ַ
�ڴ��ַ����ָ�� 
*/

main(){
	printf("��Ϸ��ʼ��\n");
	
	int i;
	for(i = 100; i > 0; i--){
		
		_sleep(1000);// ��ͬ�ĵ���д����ͬ���е��� _sleep(1000)���е���sleep(1000)������Sleep(1000) 
		
		printf("��ʣ�����룺%d\n",i);
		
	} 
	
	printf("��ϲӮ��\n");
	
	system("pause");
}
