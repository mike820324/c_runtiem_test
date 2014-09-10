#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

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
     char *tinput;
     unsigned int l_input;
     
     

     cout << "input:";
     cin >> tinput;

     l_input = lenghth(tinput);
     cout << "length:" << l_input << endl;
     return 0;
}
