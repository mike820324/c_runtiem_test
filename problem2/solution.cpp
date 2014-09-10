#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>


using namespace std;
/* 
 * change int to unsigned int will be better
 * since this function will only read the value of the pointer, I will suggest you use "const char *" instead of "char *"
 */
unsigned int lenghth(const char *data)
{
     int count = 0;
		
     while(*data) {
          count++;
          data++;
     }
     return count;
}


int main(void)
{
     static int abc;
     char *tinput = "hello world";
     
     /* 
      * This is a good example to demonstrate what is the difference between array and
      * pointer .
      */
     char input[5];
     char *input2;
     /* what is the difference between these two variables */
     
	 /* change int to unsigned int will be better */
     unsigned int l_input;
     
     

     cout << "input:";
     /* cin will stop when meet space :) */
     cin >> input;

     l_input = lenghth(input);
     cout << "length:" << l_input << endl;
     system("pause");
     return 0;
}
