#include <stdio.h>
#include <stdlib.h>

/**
���뺯����
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
	// ����һ��int���͵����� 
	int i;
	printf("����������֣�\n");
	scanf("%d",&i);
	printf("����������ǣ�%d\n",i);
	
	// ����һ���ַ�����
	// �������飺C������û���ַ�������������char�����ʾ��char�����д����forѭ����д��������ӡ
	char cArray[] = {'H','E','L','L','O'};
	int j; // ��C�����в��ܽ��ֶζ��������棬ֻ�ܶ��������� 
	for(j = 0; j < 5; j++){//  
		printf("cArray[%d] == %c\n", j, cArray[j]);
	}
	
		printf("cArray == %s\n", cArray);
	
	system("pause");
}
