#include<iostream>
using namespace std;
class Student 
{
public:
	int ID;
	string Name;
};
int main()
{
	Student s1;
	s1.ID=1001;
        s1.Name="Prashanth";
	cout<<s1.ID<<endl;
	cout<<s1.Name<<endl;
	return 0;
}
