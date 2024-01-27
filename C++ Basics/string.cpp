#include<iostream>
#include<string.h>
using namespace std;

class Student
{
public:
   char *name_p;

  public:

    Student(char* sName)
    {
      cout<<"Student::ctor\n";
      name_p = new char(sizeof(strlen(sName)));
      name_p = sName;
    }

     char* sName() 
    {
      return(name_p);
    }
    
   
    
     void display()
     {
         
         cout<<name_p;
         
     }
    
};

int main()
{
    
    Student s1("Prashanth");
    s1.display();
    return 0;
    
}

