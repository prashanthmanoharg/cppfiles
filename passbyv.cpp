#include<iostream>
using namespace std;
void passByVal(int val);
void passByRef(int &ref);
void passByPtr(int *ptr);

int main()
{
	
	int x=5;
	/*
	cout<<"x = "<<x<<endl;
	passByVal(x);
	cout<<"x = "<<x<<endl;
	passByRef(x);
	cout<<"x = "<<x<<endl;
	*/
	
	int* xptr = &x;
	cout<<"x= "<<x<<endl;
	cout<<"x= "<<*xptr<<endl;
	passByPtr(xptr);
	cout<<"x= "<<x<<endl;
	cout<<"x= "<<*xptr<<endl;
	
	return 0;
	
	
}
	
void passByVal(int val)
{
	
	val=10;
	cout<<"val = "<<val<<endl;
}

void passByRef(int &ref)
{
	
	ref=20;
	cout<<"ref ="<<ref<<endl;
}

void passByPtr(int *ptr)
{
	*ptr=30;
	cout<<"The refernced value = "<<*ptr<<endl;
	
}
	
	
		

