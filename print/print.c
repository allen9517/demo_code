#include <stdio.h>
#include <stdarg.h>

#define PRINT(type,fmt, args...) MyPrintf(type, fmt, ##args)





void MyPrintf(int type, const char* fmt, ...)
{
	va_list args;         //定义一个va_list类型的变量，用来储存单个参数
	va_start(args, fmt);  //使args指向可变参数的第一个参数

	switch(type)
	{
		case 0: printf("[ERROR]:"); break;
		case 1: printf("[INFO]:"); break;
		case 2: printf("[DEBUG]:"); break;
	}
	vprintf(fmt, args);   //直接传递给printf

	va_end(args);         //结束可变参数的获取
}


int main(int argc, char **argv)
{
	PRINT(2, "This is PRINT!:%s %d\n", __FILE__, __LINE__);
	PRINT(1, "This is PRINT!:%s %d\n", __FILE__, __LINE__);
	PRINT(0, "This is PRINT!:%s %d\n", __FILE__, __LINE__);
}
