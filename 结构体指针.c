#include <stdio.h>
#include <stdlib.h>

/**
�ṹ��ָ�� 
*/ 

// ����ṹ��
struct student{
	int age;
	float score;
	char sex;
}; 

main(){
	
	// ʹ�ýṹ��
	struct student stu = {18, 90, 'W'}; 
	
	// �ṹ��ָ��
	struct student* point = &stu;
	struct student** point2 = &point;
	
	// �ṹ��ָ��ȡֵ (*point).age �ȼ��� point->age 
	printf("(*point).age = %d\n",(*point).age);
	printf("point->age  = %d\n",point->age);
	
	// ��ֵ����
	point->age = 20; 
	printf("point->age  = %d\n",point->age);
	
	// �����ṹ��ָ��ȡֵ (**point2).age �ȼ��� (*point2)->age 
	printf("(**point2).age = %d\n",(**point2).age);
	printf("(*point2)->age  = %d\n",(*point2)->age );
	
	// ����ָ�븳ֵ
	// (**point2).age = 2000; 
	(*point2)->age = 3000;
	
	printf("(**point2).age = %d\n",(**point2).age);
	printf("(*point2)->age  = %d\n",(*point2)->age );
	
	system("pause");
} 
