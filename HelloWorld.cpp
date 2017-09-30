#include <stdio.h> // inculde相当于Java中的import;   stdio：全称是standard input$output 标准的输入输出流；   .h：头文件的后缀；头文件包含一些常用的函数 
#include <stdlib.h>// 导入标准的C语言函数库 
main()// 函数的入口，相当于Java的main()方法 
{// 函数的开始 
	printf("Hello World !\n");// 输出函数，里面是对应的内容 
	
	// system("calc");// 调启计算器
	// system("mspaint");// 调启画图工具 
	// system("services.msc");// 调启服务
	system("java Hello");// 执行字节码 
	
	system("pause");// 让docs命令行执行pause命令；作用是控制台停留 
}// 函数的结束 
