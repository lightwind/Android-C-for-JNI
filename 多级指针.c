#include <stdio.h>
#include <stdlib.h>

/**
�༶ָ�� 
*/

main(){
	
	// ����һ��int���͵ı��������Ҹ�ֵΪ100 
	int i = 100; 
	// ����һ��int���͵�һ��ָ�����address1�����ҽ�i�ĵ�ַ��ֵ��address1 
	int* address1 = &i; 
	// ����һ��int���͵Ķ���ָ�����address2�����ҽ�address1�ĵ�ַ��ֵ��address2 
	int** address2 = &address1; 
	// ��������ָ�� 
	int*** address3 = &address2; 
	// �����ļ�ָ�� 
	// int**** address4 = &address3;
	
	// �༶ָ��ȡֵ ****address4�õ���ֵ��100 
	// printf("****address4 == %d\n",****address4);
	// printf("***address4 == %#x\n",***address4);
	
	printf("***address3 == %d\n",***address3);
	
	// ****address4 = 3000;
	// printf("****address4 == %d\n",****address4);
	
	***address3 = 3000;
	printf("***address3 == %d\n",***address3);
	
	system("pause");
}
