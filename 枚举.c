#include <stdio.h>
#include <stdlib.h>

/**
枚举的值是递增的 
枚举默认的首元素的值是0 
*/

enum WeekDay{
	Monday = 10, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
}; 

main(){
	enum WeekDay day = Sunday;
	printf("%d\n", day);
	system("pause");
} 
