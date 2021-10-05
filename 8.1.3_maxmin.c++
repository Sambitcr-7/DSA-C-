#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int array[n];
    
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    
    for(int i=0;i<n;i++){
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
        
    }
    cout<<maxNo<<" "<<minNO<<endl;

    return 0;
}
