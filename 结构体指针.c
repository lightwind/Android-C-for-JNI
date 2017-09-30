#include <stdio.h>
#include <stdlib.h>

/**
结构体指针 
*/ 

// 定义结构体
struct student{
	int age;
	float score;
	char sex;
}; 

main(){
	
	// 使用结构体
	struct student stu = {18, 90, 'W'}; 
	
	// 结构体指针
	struct student* point = &stu;
	struct student** point2 = &point;
	
	// 结构体指针取值 (*point).age 等价于 point->age 
	printf("(*point).age = %d\n",(*point).age);
	printf("point->age  = %d\n",point->age);
	
	// 赋值运算
	point->age = 20; 
	printf("point->age  = %d\n",point->age);
	
	// 二级结构体指针取值 (**point2).age 等价于 (*point2)->age 
	printf("(**point2).age = %d\n",(**point2).age);
	printf("(*point2)->age  = %d\n",(*point2)->age );
	
	// 二级指针赋值
	// (**point2).age = 2000; 
	(*point2)->age = 3000;
	
	printf("(**point2).age = %d\n",(**point2).age);
	printf("(*point2)->age  = %d\n",(*point2)->age );
	
	system("pause");
} 
