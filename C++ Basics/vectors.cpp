#include<iostream>
#include<vector>
using namespace std;

int main()
{
std::vector<int>my_vec;
my_vec.push_back(10);
my_vec.push_back(20);
cout<< "Vector size = "<< my_vec.size()<<endl;
my_vec.push_back(30);
my_vec.push_back(40);

cout<< "Vector size = "<< my_vec.size()<<endl;

for(int i=0;i<my_vec.size();i++)
cout<<"vector "<<i<<"   "<<my_vec.at(i)<<endl;
return 0;


}
