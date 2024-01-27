#include<iostream>
using namespace std;

typedef union type {
int a;
float b;
}
my_type;

int main()
{
my_type x;
x.a=5;
cout<<"a : "<< x.a<<endl;
x.b=7.3;
cout<<"a :  "<<x.a<<endl;
cout<<"b :  "<<x.b<<endl;
return 0;


}
