#include <iostream>
using namespace std;
  
class Box 
{
   double width;
   public:
      friend void printWidth( Box box );
      friend void display();
      void setWidth( double wid );
};
void Box::setWidth( double wid ) 
{
   width = wid;
}
void printWidth( Box box ) 
{
   cout << "Width of box: " << box.width <<endl;
}
void display()
{
cout<<"This is display method";

}
int main() {
   Box box;
   box.setWidth(200.0);
   printWidth( box );
   display();
   return 0;
}
