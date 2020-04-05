#include<iostream>

using namespace std;

int main()
{
	int temp;
	int input;
	int *pointer=NULL;
	cout<<"How many items you are going to enter"<<endl;
	cin>>input;
	pointer = new int[input];
	for (int counter=0;counter<input;counter++)
	{
		cout<<"Enter the item"<<counter+1;
		cin>>temp;
		*(pointer+counter) = temp;
	}
	
	cout<<"The items you have entered are"<<endl;
	
		for (int counter=0;counter<input;counter++)
	{
		cout<<counter+1<<"item is "<<*(pointer+counter)<<endl;	
	
    }
	delete []pointer;
	
	
	
	return 0;
}
