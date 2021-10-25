#include <iostream>

using namespace std;
int firstsocc(int arr[],int n, int i, int key){
    if(i==n){
        return -1;
    }
    if(arr[1]==key){
        return i;
    }
    return firstsocc(arr,n,i+1, key);
}
int lastocc(int arr[], int n, int i, int key){
    if(i==n){
        return-1;
    }
    int restArray = lastocc(arr,n,i+1, key);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
        
    }
    return -1;
}



int main()
{
    int arr[]={4,2,1,2,5,2,7};
    cout<<firstsocc(arr,7,0,2)<<endl;
    
   cout<<lastocc(arr,7,0,2)<<endl;

    return 0;
}
