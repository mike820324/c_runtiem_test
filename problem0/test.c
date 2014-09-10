#include <stdio.h>

int main() {
	/* local variable */
	int a = 20;
	int *ptr;
	int b[3] = {1,2,3};
	ptr = b +1;
	/* it should be 3*/
	printf("%x\n", *(ptr+1));
	printf("%x\n", ptr[1]);
	

}
