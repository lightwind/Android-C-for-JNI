#include <stdio.h>
#include <stdlib.h>

/**
���������
printf("���������");

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

��C������Ĭ�ϱ���С�������λ 
Ҫ�뱣��ָ����λ������Ҫ��%�������".����"�� 

ʮ���ƣ�12345678
�����ƣ�101111000110000101001110 
24910�Ķ����ƣ�	0110000101001110 // ������Ķ����ƽ��нض���

��ͬ������Ҫ�ò�ͬ��ռλ����������򽫻ᵼ�¾��ȶ�ʧ 
*/ 

main(){
	char c = 'a';
	int i = 12345678;
	long l = 1234567890;
	float f = 3.1415;
	double d = 3.1415926535;
	
	printf("c == %c\n",c); 
	printf("i == %d\n",i); 
	printf("l == %ld\n",l); 
	printf("f == %.4f\n",f); // ��%�������.4��ʾ����С�������4λ 
	printf("d == %.11lf\n",d); 
	
	printf("i_hd == %hd\n",i); // ���ȶ�ʧ �����24910 
	
	// ���飬C�����е�[]����д�ڱ������ұߣ�����д����� 
	char cArray[] = {'A','B'};
	printf("cArray���ڴ��ַ == %#x\n",&cArray); // ��%�������#�������ʱ���ͻ��Զ���16���ƽ��ǰ�����0x
	
	char* test = "I Love You!";
	
	printf("cArray������ == %s\n",cArray);
	
	printf("test���ڴ��ַ == %#x\n",&test);
	printf("test������ == %s\n",test);
	
	system("pause");
}
