#include <stdio.h>
#include <stdlib.h>

/**
ָ������ڴ��ַ
�ڴ��ַ����ָ�� 
*/

main(){
	
	// ����һ��int���͵ı���i�����Ҹ�ֵΪ10 
	int i = 10; 
	
	// ����һ��int���͵�һ��ָ�����p 
	int* p;
	
	// ��i��Ӧ�ĵ�ַ��ֵ��p���� 
	p = &i;
	
	// ��ָ���Ӧ��ֵȡ�� *p :��p������Ӧ�ĵ�ַ��ֵȡ�� 
	printf("*p == %d\n",*p);
	
	*p = 100;
	printf("*p == %d\n",*p);
	
	system("pause");
}
