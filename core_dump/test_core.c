#include <stdio.h>

void foo()
{
	int *p = NULL;
	printf("%d\n", *p);
}

void foo2()
{
	char *pStr = NULL;
	char buff[16] = {0};

	strcpy(buff, pStr);
}

int main(int argc, char **argv)
{
	foo2();
	foo();
	
	return 0;
}
