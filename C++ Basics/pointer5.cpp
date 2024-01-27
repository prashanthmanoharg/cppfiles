#include<iostream>
using namespace std;

void func(int *&intArr)
{
	
	delete[] intArr;
	intArr = new int[20];
	
	for(int i=0;i<20;i++)
	{
		intArr[i]=20;
		
	}
	
}


int main()
{
	int *intArr= new int[10];
	
	func(intArr);
	
	for(int i=0;i<20;i++)
	{
		
		cout<<i<<*(intArr+i) << endl;
	}
	
	delete[] intArr;
	
	return 0;
}
