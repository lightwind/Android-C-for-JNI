#include <stdio.h>
#include <stdlib.h>

/**
������ 
�ص㣬���е��ֶζ���ʹ��ͬһ���ڴ�ռ�
Ӧ�ó���---��������֮�䷽��ת�� 
*/

// ����һ���ṹ�� 
struct Date{
	int year;
	int month;
	int day;
};

// ����һ�������壬�ص㣬���е��ֶζ���ʹ��ͬһ���ڴ�ռ�
union Mix{
	long i;// 4���ֽ� 
	int k;// 4���ֽ� 
	char ii;// 1���ֽ� 
};
 
main(){
	
	printf("date:%d\n",sizeof(struct Date));// 12
	printf("mix:%d\n",sizeof(union Mix));// 4
	
	// ʵ��
	union Mix m;// �����Ķ���ͬһ���ڴ�ռ䣬���Ժ����޸ĵĻḲ��ǰ����޸� 
	m.i = 100;
	m.k = 123;
	printf("m.i == %d\n",m.i);// 123
	printf("m.k == %d\n",m.k);// 123
	
	system("pause");
}
