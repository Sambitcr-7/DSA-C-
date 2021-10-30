#include <iostream>

using namespace std;

class student{
  public:
  string name;
  int age;
  bool gender;
  
  student(){
      cout<<"default constructor"<<endl;
  }
  
  student(string s, int a, int g){
      name = s;
      age = a; 
      gender =g;
      
  }// parameterised constructor
  
  void getName(){
      cout<<name<<endl;
  }
  
  void printInfo(){
      cout<<"Name =";
      cout<<name<<endl;
      cout<<"Age=";
      cout<<age<<endl;
      cout<<"Gender = ";
      cout<<gender<<endl;
  }
};

int main()
{
    // student arr[3];
    // for(int i=0;i<3;i++){
    //     string s;
    //     cout<<"Name =";
    //     cin>>s;
    //     arr[i].setName(s);
    //     cin>>arr[i].name;
    //     cout<<"Age=";
    //     cin>>arr[i].age;
    //     cout<<"Gender=";
    //     cin>>arr[i].gender;
    // }
    // for(int i=0;i<3;i++){
    //     arr[i].printInfo();
    // }
    
    student a("Urvi", 20, 1);
    a.printInfo();
    student b;
    

    return 0;
}
