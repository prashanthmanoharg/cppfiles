#include<iostream>
using namespace std;
int main()
{
	
	int var=5;
	
	//datatype pointername
	
	int *ip;
	double *dp;
	float *fp;
	char *ch;
	
	ip=&var; //address of var is stored in ip
	
	cout<<"Variable value:"<<var<<endl;
	cout<<"Address in pointer"<<ip<<endl;
	cout<<"poiner pointing to value"<<*ip<<endl;
	
	
	*ip=6;
	
	cout<<"Variable value:"<<var<<endl;
	cout<<"Address in pointer"<<ip<<endl;
	cout<<"poiner pointing to value"<<*ip<<endl;
	
	return 0;
	
}
