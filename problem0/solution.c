#include <stdio.h>
#include <stdlib.h>


int *foo() 
{
	int *a = (int*)malloc(sizeof(int));
	*a = 20;
	return a;
}


void bar(int a, int b, int c) 
{
	int test = a+b+c;
	printf("%d\n", test);
}
int main() 
{
	int *ptr = NULL;
	ptr = foo();
	bar(10, 20, 30);
	/* printing out the return value */
	printf("%d\n", *ptr);
}
