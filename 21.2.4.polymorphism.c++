#include"bits/stdc++.h"
using namespace std;

class base
{
    void print(){
        cout <<"this is the base class's print fuction "<< endl;
    }
    void display(){
        cout << "this is the base class's disaplay function" << endl;
        
    }
};
class derived: public base
{
    public:
     void print(){
        cout <<"this is the derived class's print fuction "<< endl;
    }
    void display(){
        cout << "this is the derived class's disaplay function" << endl;
        
    }
};


int32_t main (){
    
    base *baseptr;
    derived d;
    baseptr =&d;
    
    baseptr -> print();
    
    baseptr -> disaplay();
   
    return 0;
}