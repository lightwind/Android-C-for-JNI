#include <stdio.h>
#include <stdlib.h>

// �ṹ��

// ����ṹ��
struct student{
	int age;// 4���ֽ� 
	float score;// 4���ֽ� 
	char sex;// 1���ֽ� 
}; 

main(){
	
	// ʹ�ýṹ��
	struct student stu = {18, 98.8, 'W'};
	// �ṹ��ȡֵ 
	printf("stu.age = %d\n", stu.age);
	printf("stu.score = %.1f\n", stu.score);
	printf("stu.sex = %c\n", stu.sex);
	
	// �ṹ�帳ֵ
	stu.age = 20;
	stu.score = 100;
	stu.sex = 'M'; 
	
	printf("stu.age = %d\n", stu.age);
	printf("stu.score = %.1f\n", stu.score);
	printf("stu.sex = %c\n", stu.sex);
	
	// �ṹ��ĳ���
	printf("struct student�ĳ��� = %d\n", sizeof(struct student));// 12
	
	system("pause");
} 
