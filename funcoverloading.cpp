#include<iostream>
using namespace std;

int add(int a,int b)
{
cout<<a+b<<endl;
return 0;
}

int add(int a,int b,int c)
{
cout<<a+b+c<<endl;
return 0;
}

int main()
{
add(20,40);
add(40,20,30);

}
