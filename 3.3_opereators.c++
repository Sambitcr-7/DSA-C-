#include <iostream>
using namespace std;

int main() {
    int i=10, j=20, k;
    //10 //9 //19 //20 //9 //20 //10 //19
    k = i-- - i++  + --j - ++j + --i - j-- + ++i - j++;
    
    cout<<i<<endl;//10
    cout<<j<<endl;//20
    cout<<k<<endl;//-20

    // Example 1 ---
    // int i=1;
    //1 //3
    // i = i++ + ++i;
    // cout<<i<<endl;
    
    //Example 2----
    // int i =1;
    // int j =2;
    // int k;
    //1 //2 //1 //2
    // k = 1 + j + i++ + j++ + ++i + ++j;

    // cout<<i<<" "<<j<<" "<<" "<<k<<endl;

    //Example 3---
    // int i = 0;
    //0
    // i = i++ - --i + ++i - i--;
    //1
    // cout<<i<< endl;



    //Example 4--
    // int i=1, j = 2, k=3;
    // int m = i-- - j-- - k--;
    // cout<<i<<endl;
    // cout<<j<<endl;
    // cout<<k<<endl;
    // cout<<m<<endl;
    
    return 0;
}





// Q Input a number n and tell whether it is equal to less than or more than 10
// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
    
//     if(n >10){
//         cout<<"More than 10"<<endl;
        
//     }
//     else if(n < 10){
//         cout<<"less than 10"<<endl;
//     }
//     else{
//         cout<<"Equal to 10"<<endl;
//     }

//     return 0;
// }


//Write a program to output whether a number is divisible by both 2 and 3 or divisible by one of them 
// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     if(n%2 ==0 && n%3==0){
//         cout<<"Divisible by both"<<endl;
//     }
//     else if(n%2==0){
//         cout<<"Divisible by only 2"<<endl;
//     }
//     else if(n%3==0){
//         cout<<"Divisible by only 3"<<endl;
//     }
//     else{
//         cout<<"Divisible by none"<<endl;
//     }

//     return 0;
// }