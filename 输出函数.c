#include <stdio.h>
#include <stdlib.h>

/**
输出函数：
printf("输出的内容");

%d -- nt
%ld -- long int
%c -- char
%f -- float
%u -- 无符号数
%hd -- 短整型
%lf -- double
%x -- 十六进制输出 int 或者long int 或者 short int
%o -- 八进制输出
%s -- 字符串 

在C语言中默认保留小数点后六位 
要想保留指定的位数，需要在%后面加上".数字"。 

十进制：12345678
二进制：101111000110000101001110 
24910的二进制：	0110000101001110 // 在上面的二进制进行截断了

不同的类型要用不同的占位符输出，否则将会导致精度丢失 
*/ 

main(){
	char c = 'a';
	int i = 12345678;
	long l = 1234567890;
	float f = 3.1415;
	double d = 3.1415926535;
	
	printf("c == %c\n",c); 
	printf("i == %d\n",i); 
	printf("l == %ld\n",l); 
	printf("f == %.4f\n",f); // 在%后面加上.4表示保留小数点后面4位 
	printf("d == %.11lf\n",d); 
	
	printf("i_hd == %hd\n",i); // 精度丢失 ，输出24910 
	
	// 数组，C语言中的[]必须写在变量的右边，不能写在左边 
	char cArray[] = {'A','B'};
	printf("cArray的内存地址 == %#x\n",&cArray); // 在%后面加上#，在输出时，就会自动在16进制结果前面加上0x
	
	char* test = "I Love You!";
	
	printf("cArray的内容 == %s\n",cArray);
	
	printf("test的内存地址 == %#x\n",&test);
	printf("test的内容 == %s\n",test);
	
	system("pause");
}
