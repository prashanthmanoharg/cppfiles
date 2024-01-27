#include<iostream>
#include<csignal>
using namespace std;

void signal_handler(int signal_num)
{
cout<<"The interrupt signal is ( "<< signal_num << "). n";
//exit(signal_num);
}

int main()
{
	signal(SIGABRT,signal_handler);
	while(true)
	cout<<"Welcome to C+ Programming"<<endl;
	return 0;

}
