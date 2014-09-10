#include <stdio.h>

int *foo() 
{
	int a = 20;
	return &a;
}

int bar(int a, int b, int c) 
{
	int test = a+b+c;
//	printf("%d\n", test);
	return test;
}
int main() 
{
	int *ptr = NULL;
	ptr = foo();
	bar(10, 10, 10);
	/* printing out the return value */
	printf("%d\n", *ptr);
}
