#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
	int i,j;
	char c;
	for( i=0, j=strlen(str)-1; i<j; i++, j--) {
		c = str[i];
	       	str[i]=str[j];
	       	str[j]=c;
	}
}

int main()
{
	char *test = "12345";
	printf("%p\n", test);
	printf("%p\n", &test);
	char test1[] ="12345";
	//reverse(test1);
	//reverse(test);
	test[0] = 'f';
	puts(test);
	return 0;
}
