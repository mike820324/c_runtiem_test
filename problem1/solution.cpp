#include <iostream>

using namespace std;

struct myStruct {
	int num;
	struct myStruct *next;
};

	
struct myStruct* add(struct myStruct *prev, unsigned int value)
{
	struct myStruct *current;
	current = new struct myStruct;

	
	/* let prev to point to the current field */
	prev->next = current;
	current->num = value;
	current->next = NULL;
	
	/* return the new chunk */	
	return current;
}


int main()
{

	struct myStruct *head = NULL;
	struct myStruct *ptr = NULL;
	/* create new chunk */
	head=new struct myStruct;
	head->next=NULL;

	/* temp ptr */
	ptr = head;
	ptr->num = 0;
	for(int i = 1;i <= 5;i++)
        	ptr = add(ptr, i);
	

	for(ptr = head; ptr != NULL; ptr = ptr->next) 
		cout<<ptr->num<<" ";
		
	cout<<endl;
}
