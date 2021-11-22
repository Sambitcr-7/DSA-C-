#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a>b){
        if(a>c){
        cout<<a<<endl;
    }
    else{
        cout<<c<<endl;
    }
      }
    else{
        if(b>c){
            cout<<c<<endl;
        }
    }

    return 0;
}


//Example 2 4-> even 
//           9-> odd

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
    return 0;
}



//Example 3 Dataing frined with her 
#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE //not part of code , used to beautify input output
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int savings;
    cin>>savings;

    if(savings>5000){
        if(savings>10000){
            cout<<"Roadtrip with neha\n";
        }else{
            cout<<"Shopping with neha\n";
        }
    }else if(savings>2000){
        cout<<"Reshmi\n";
    }else{
        cout<<"Friends\n";
    }
    return 0;

}