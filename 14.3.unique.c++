#include <iostream>

using namespace std;

int unique(int arr[], int n){
    
    int xorsum=0;
    for(int i=0; i<n;i++){
        xorsum = xorsum^arr[i];
        
    }
    return xorsum;
}
int main()
{
    int arr[]={1,2,3,4,1,2,3};
    cout<<unique(arr,7)<<endl;
    
    
   
   
    return 0;
}


#include <iostream>

using namespace std;

int unique(int arr[], int n){
    return ((n & (1<<pos))!=0);
    
    int xorsum=0;
    for(int i=0; i<n;i++){
        xorsum = xorsum^arr[i];
        
    }
    int unique(int arr[], int n){
        int xorsum=0;
        for(int 1=0;1<n;i++){
            xorsum=xorsum^arr[i];
        }
    }
    int tempxor=xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1){
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >>1;
        
    }
    int newxor=0;
    for(int i=0; i<n;i++){
        if(setBit(arr[i],pos-1)){
            newxor=newxor^arr[i];
            
        }
    }
    cout<<newror<<endl;
    cout<<tempxor^newror<<endl;
}
int main()
{
   int arr[]={1,2,3,1,2,3,5,7};
   unique(arr,8);
    
   
   
    return 0;
}

#include <iostream>

using namespace std;

int unique(int arr[], int n){
    return(n &(1<<pos))!=0);
}
int unique(int arr[],int n){
    
    for(int i=0;i<64; i++){
        int sum=0;
        for(int j=0;j<n;j++);
        int sum=0;
        for(int j=0;j<n;j++){
            if(getBit(arr[j],i)){
                sum++;
                
            }
        }
        if(sum%3!=0){
            result = setBit(result, i);
        }
    }

int main()
{
   int arr[]={1,2,3,4,1,2,3,1,2,3};
   cout<<unque(arr,10)<<endl;
   
   
    return 0;
}
