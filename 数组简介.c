#include <stdio.h>
#include <stdlib.h>

/**
����ļ򵥽���
1�������ȡֵ
2�������ȡ��ַ
3��������һ���������ڴ�ؼ�
4���������Ԫ�صĵ�ַ������ĵ�ַ��ͬ 
4����������
5�� 
*/

main(){
	
	char cArray[] = {'H','E','L','L','O'};
	int iArray[] = {1, 2, 3, 4, 5};
	
	// ȡ�����ֵ
	printf("cArray[0] == %c\n",cArray[0]); 
	printf("cArray[1] == %c\n",cArray[1]); 
	
	// ȡ������ڴ��ֵַ
	printf("cArray[0]��ַ == %#x\n",&cArray[0]); // 0x62fe40 // �����������͵Ĵ�Сһ���ۼӣ�����������һ���������ڴ�ؼ�
	printf("cArray[1]��ַ == %#x\n",&cArray[1]); // 0x62fe41
	printf("cArray[2]��ַ == %#x\n",&cArray[2]); // 0x62fe42
	printf("cArray[3]��ַ == %#x\n",&cArray[3]); // 0x62fe43
	
	printf("iArray��ַ == %#x\n",&iArray);// 0x62fe20 // �������Ԫ�صĵ�ַ������ĵ�ַ��ͬ 
	printf("iArray[0]��ַ == %#x\n",&iArray[0]); // 0x62fe20
	printf("iArray[1]��ַ == %#x\n",&iArray[1]); // 0x62fe24
	
	// ��ָ��ȥȡֵ
	// ��������Ϊ������һ���������ڴ�ռ䣬������ȡ��ֵ���ټ���һ��ֵ�����ý�ָ��ָ����һ��λ�õ�ֵ�����Ҳ��ȡ��ֵ 
	printf("iArray == %d\n",*iArray); 
	printf("iArray[0] == %d\n",*iArray + 0); 
	printf("iArray[1] == %d\n",*iArray + 1); 
	printf("iArray[2] == %d\n",*iArray + 2); 
	printf("iArray[3] == %d\n",*iArray + 3); 
	
	
	// �����Ǹ����±�ȥȡֵ
	printf("iArray[0] == %d\n",*(iArray + 0)); 
	printf("iArray[1] == %d\n",*(iArray + 1)); 
	printf("iArray[2] == %d\n",*(iArray + 2)); 
	printf("iArray[3] == %d\n",*(iArray + 3)); 
	
	system("pause");
}
