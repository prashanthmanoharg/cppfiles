#include<iostream>
using namespace std;
class BaseClass 
{
public:	
	void disp()
	{
		cout<<"Parent Class Function";

	}
};

class DerivedClass: public BaseClass
{
public:
     void disp()
     {
	cout<<"Child Class Function";
     }
};

int main()
{

	DerivedClass obj = DerivedClass();
	obj.disp();
	return 0;

}
