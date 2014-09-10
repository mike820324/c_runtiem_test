#include <iostream>
using namespace std;



struct myStruct {
	int num;
	struct myStruct *next;
};


void add(struct myStruct *ptr)
{

	ptr->next=new struct myStruct;
	ptr=ptr->next;
	ptr->num=1;
	ptr->next=NULL;
}

int main(){
	struct myStruct *list;
	struct myStruct *ptr;
	list=new struct myStruct;
	list->next=NULL;
	ptr=list;

	ptr->num=0;
	for(int i=1;i<=5;i++){
        	add(ptr);
	}

	ptr=list;
	while(ptr!=NULL)
	{
		cout<<ptr->num<<" ";
		ptr=ptr->next;
	}
	cout<<endl;

}
