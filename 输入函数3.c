#include <stdio.h>
#include <stdlib.h>

/**
���뺯��3��
scanf("ռλ��",�ڴ��ַ);

%d -- nt
%ld -- long int
%c -- char
%f -- float
%u -- �޷�����
%hd -- ������
%lf -- double
%x -- ʮ��������� int ����long int ���� short int
%o -- �˽������
%s -- �ַ��� 
*/

main(){
	
	// ����һ���ַ�����
	// �������飺C������û���ַ�������������char�����ʾ��char�����д����forѭ����д��������ӡ
	char cArray[] = {'a','b','c','d','e','\0','A','B'};// \0��������������AB���޷����� 
	// ������һ���������ڴ�ռ� 
	
	printf("cArray == %s\n", cArray);
	
	// char���͵�ָ�� 
	char* test = "I Love You!!";
	printf("test == %s\n",test); 
	 
	system("pause");
}
