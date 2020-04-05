#include<iostream>
#include<fstream>
using namespace std;

int main()
{

fstream new_file;
new_file.open("Sample.txt",ios::out);
if(!new_file)
{

cout<<"File creation failed";

}
else
{
cout<<"New file created";
new_file<<"Welcome to C++ Programming";
new_file.close(); //Step 4: Closing file

}
return 0;

}
