#include <stdio.h>
#include <stdlib.h>

/**
�û��������� 
*/

main(){
	
	printf("����������ĳ���\n");
	// 1���û���������ĳ���
	int length;
	scanf("%d",&length);
	printf("��������鳤��Ϊ��%d\n",length);
	// 2�������û�����ĳ��ȴ�������
	int iArray[length];
	// 3�����û�һ����������ֵ
	int i;
	for(i = 0;i < length; i++){
		printf("������iArray[%d]��ֵ��\n",i);
		scanf("%d",iArray + i);
	}
	// 4����ֵ����ȡ����ӡ����
	for(i = 0;i < length; i++){
		printf("iArray[%d]��ֵ == %d\n",i, iArray[i]);
	}
	
	system("pause");
}
