#include <stdio.h>
#include <stdlib.h>

/**
C���ԵĻ������ͣ�
char��int��float��double��long��short��signed��unsigned��void
�������͵ĳ��ȣ�sizeof("����")����int���͵ĳ���
ռλ����int���͵�ռλ���ǣ�%d
printf("�������"); 

Java�����������ͺ�C�������͵�һЩ����
1��Java��char���͵ĳ���Ϊ2���ֽڣ�C������Ϊ1���ֽ�
2��Java��long���͵ĳ���Ϊ8���ֽڣ�C������Ϊ4���ֽ�
	C99��׼�涨��long���͵Ĺ涨����С�����͡� 
3��C������û��byte
4��C������û��boolean����0��ʾfalse����0��ʾtrue 

signed���з��ţ�-128~127֮�䡣 
unsigned���޷��ţ����ڱ�ʾһ��������0~255֮�䡣
void�������ͣ�Ҳ�Ǵ����������� 
*/ 

int main()
{
	
	// int size = sizeof(int);
	// printf("int���͵ĳ����ǣ�%d\n",size); 
	
	printf("int���͵ĳ����ǣ�%d\n",sizeof(int)); 
	printf("char���͵ĳ����ǣ�%d\n",sizeof(char)); 
	printf("float���͵ĳ����ǣ�%d\n",sizeof(float)); 
	printf("long���͵ĳ����ǣ�%d\n",sizeof(long)); 
	printf("short���͵ĳ����ǣ�%d\n",sizeof(short)); 
	
	if(1){
		printf("true\n");
	}else{
		printf("false\n");
	}
	
	system("pause");
	return 0;// Ĭ�Ͻ����Բ�д����ֵ	
}
 
