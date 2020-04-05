#include<iostream>
using namespace std;
int main()
{
int len, sum=0;
float average=0;
cout<<"Enter the no. of students in the class"<<endl;
cin>>len;
int *marks=new int[len]; //Dynamically allocating memory for array
cout<<"Enter marks of each student"<<endl;
for(int i=0;i<len;i++)
{
cin>>*(marks+i);
}
for(int i=0;i<len;i++)
{
sum+=*(marks+i);
}
average=(float)sum/(float)len;
cout<<"sum of marks is "<<sum<<endl;
cout<<"Average of marks is "<<average<<endl;
return 0;
}
