#include<iostream>
using namespace std;

int main()
{
double* pvalue = NULL; //Pointer initialized with null
pvalue= new double; //Request memory for the variable

*pvalue=12345;

cout<<"Value of pvalue : "<<*pvalue<<endl;

delete [] pvalue;

return 0;
}
