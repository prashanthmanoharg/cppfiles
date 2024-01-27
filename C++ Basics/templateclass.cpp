#include<iostream>
using namespace std;

template <class T>

class something{
	public:
	int a[2];
	int add();
    something();
};

something::something()
{
	cin>>a[0]>>a[1];
	
}


int something::add()
{
	return a[0]+a[1];
	
}
int main()
{
	something intsomething;
	cout<<intsomething.add();
	return 0;
	
	
}
