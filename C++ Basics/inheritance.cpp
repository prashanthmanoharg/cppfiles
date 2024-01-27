//Inheritance
#include <iostream>
  
using namespace std;
  
class Train{
    int Numberofwheels;
     int Numberofcoaches;
    public:
     void Traininfo(int n, int m){
        Numberofwheels = n;
        Numberofcoaches = m;
        }
        void showinfo(){
            cout<<Numberofcoaches<<"n"<<Numberofwheels<<"n";
        }
    };
    class BulletTrain : public Train{
        int flux;
        public:
         BulletTrain(int b){
             flux = b;
             }
               
        void Magneticfield(){
            cout<<" The Magnetic field is turned ON with flux = "<<flux ;
        }     
        };
int main()
{
    BulletTrain bullettrain(10);
    bullettrain.Traininfo(0, 20);  //accessing member function of base class
    bullettrain.showinfo();         //accessing member function of base class
    bullettrain.Magneticfield(); //Using member function of derived class
    return 0;
}
