#include <iostream>
#include<algorithm>
#include <string>

using namespace std;


int main()
{

  string str ="adsfjhalkasdjif";
  
  // convert into upper case
  
  for(int i=0 ; i<str.size (); i++)
  {
      if(str[i]>= 'a' && str [i]<='z')
      str[i]-=32;
      
  }
  cout << str;
  
  // convert to lower case
  for(int i=0; i<str.size(); i++)
  {
      if(str[i]>='A' && str[i] <= 'Z')
      str[i] +=32;
  }
  cout<<str<<endl;
  
  cout << str;
   
   

    return 0;
}