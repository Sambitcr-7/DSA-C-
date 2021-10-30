#include <iostream>

using namespace std;

class student{
  public:
  string name;
  int age;
  bool gender;
  
  student(){
      cout<<"default constructor"<<endl;
  }//default constructor
  
  student(string s, int a, int g){
      cout<<"parameterised constructor"<<endl;
      name = s;
      age = a; 
      gender =g;
      
  }// parameterised constructor
  
  student(student &a){
      cout<<"copy constructor"<<endl;
      name = a.name;
      age = a.age;
      gender = a.gender;
  }
  
  
  ~student(){
      cout<<"destructor called";
  }
  
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
  bool operator == (student &a){
      if(name==a.name && age==a.age && gender==a.gender){
          return true;
          
      }
      return false;
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
   // a.printInfo();
    student b;
    student c=a;
    
    if(c==a){
        cout<<"same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }
    

    return 0;
}
