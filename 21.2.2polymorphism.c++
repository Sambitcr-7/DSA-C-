#include"bits/stdc++.h"
using namespace std;

// function overloading 

class Apnacollege
{
public:    
    void fun()
    {
        cout << "I am a fuction with no argument "<< endl;
    }
    void fun(int x)
    {
        cout << "I am function with int argument " << endl;
        
    }
    void fun(double x)
    {
        cout <<"I am a function with double  argument " << endl;
    }
};

int32_t main(){
    Apnacollege obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);
}