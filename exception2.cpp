#include<iostream>
using namespace std;
int main()
{
	int x=1;
	try
        {
	  cout<<"Try Block"<<endl;
	  if(x<10)
	   {
		throw "ABC";
	   }
	}
	catch (int x)
	{
		cout<<"Catch Block: n"<<endl;
	}
	catch(...)
	{
		cout<<"Default Exception"<<endl;
	}

return 0;

}
