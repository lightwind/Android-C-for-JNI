#include <stdio.h>
#include <stdlib.h>

/**
ö�ٵ�ֵ�ǵ����� 
ö��Ĭ�ϵ���Ԫ�ص�ֵ��0 
*/

enum WeekDay{
	Monday = 10, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
}; 

main(){
	enum WeekDay day = Sunday;
	printf("%d\n", day);
	system("pause");
} 
