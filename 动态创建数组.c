#include <stdio.h>
#include <stdlib.h>

/**
��̬����Ĵ���
1�����û�����һ������
2�����ݳ��ȣ������ڴ�ռ�
3�����û��������е�Ԫ�����εĸ�ֵ
4�������û�������չ���鳤��
5��������չ�ĳ������·���ռ�
6������չ���ȵ�Ԫ�����û���ֵ
7���������

malloc(����);

realloc(���飬����)���·���ռ�
*/

main(){
	
	printf("������Ҫ����������ĳ��ȣ�\n"); 
	
	// 1�����û�����һ������
	int length;
	scanf("%d", &length);
	printf("��������鳤��Ϊ��%d\n",length); 
	
	// 2�����ݳ��ȣ������ڴ�ռ�
	int* iArray = malloc(length * 4);
	
	// 3�����û��������е�Ԫ�����εĸ�ֵ
	int i;
	for(i = 0; i< length; i++){
		printf("�����iArray[%d]��ֵ��",i);
		scanf("%d",iArray + i);
	}
	
	// 4�������û�������չ���鳤��
	printf("������Ҫ��չ������ĳ��ȣ�\n"); 
	int suppLength;
	scanf("%d", &suppLength);
	printf("��չ�ĳ���Ϊ��%d\n",suppLength); 
	
	// 5��������չ�ĳ������·���ռ�
	iArray = realloc(iArray, (length + suppLength) * 4); 
	
	// 6������չ���ȵ�Ԫ�����û���ֵ
	for(i = length; i< (length + suppLength); i++){
		printf("�����iArray[%d]��ֵ��",i);
		scanf("%d",iArray + i);
	}
	
	// 7���������
	for(i = 0; i< (length + suppLength); i++){
		// printf("iArray[%d] = %d\n",i, iArray[i]);
		printf("iArray[%d] = %d\n",i, *(iArray + i));
	}
	
	system("pause");
}
