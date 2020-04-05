#include<iostream>
#include<iterator>
#include<map>
 
using namespace std;
 
int main()
{
        map<int, int> Edureka1;
        Edureka1.insert(pair<int, int>(1, 40));
        Edureka1.insert(pair<int, int>(2, 30));
        Edureka1.insert(pair<int, int>(3, 60));
        Edureka1.insert(pair<int, int>(4, 20));
        Edureka1.insert(pair<int, int>(5, 50));
        Edureka1.insert(pair<int, int>(6, 50));
        Edureka1.insert(pair<int, int>(7, 10));
        map<int, int>::iterator itr;
        cout << "\nThe map Edureka1 is : \n";
        cout << "tKEYtELEMENT\n";
        for (itr = Edureka1.begin(); itr != Edureka1.end(); ++itr)
        {
                cout << 't' << itr->first << 't' << itr->second << 'n';
        }
        cout << endl;
        map<int, int> Edureka2(Edureka1.begin(), Edureka1.end());
        cout << "nThe map Edureka2 after"<< " assign from Edureka1 is : n";
        cout << "tKEYtELEMENTn";
        for (itr = Edureka2.begin(); itr != Edureka2.end(); ++itr)
        {
                cout << 't' << itr->first << 't' << itr->second << 'n';
        }
        cout << endl;
        cout << "nEdureka2 after removal of" " elements less than key=3 : n";
        cout << "tKEYtELEMENTn";
        Edureka2.erase(Edureka2.begin(), Edureka2.find(3));
        for (itr = Edureka2.begin(); itr != Edureka2.end(); ++itr)
        {
                cout << 't' << itr->first<< 't' << itr->second << 'n';
        }
        int num;
        num = Edureka2.erase(4);
        cout << "nEdureka2.erase(4) : ";
        cout << num << " removed n";
        cout << "tKEYtELEMENTn";
        for (itr = Edureka2.begin(); itr != Edureka2.end(); ++itr)
        {
                cout << 't' << itr->first << 't' << itr->second << 'n';
        }
        cout << endl;
        cout << "Edureka1.lower_bound(5) : "<< "tKEY = ";
        cout << Edureka1.lower_bound(5)->first << 't';
        cout << "tELEMENT = "<< Edureka1.lower_bound(5)->second << endl;
        cout << "Edureka1.upper_bound(5) : "<< "tKEY = ";
        cout << Edureka1.upper_bound(5)->first << 't';
        cout << "tELEMENT = "<< Edureka1.upper_bound(5)->second << endl;
        return 0;
}
