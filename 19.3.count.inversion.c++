#include "bits/stdc++.h"
using namespace std;
long long mergesort(int arr[],int l , int r, int mid){
    long long inv =0;
    int n1 = mid-l+1;
    int n2 =r-mid;
    int a[n1];
    int b[n2];
    for(int i =0;i<n1;i++){
        a[i] = arr[l+i];
    }
    for(int i =0; i<n2;i++){
        b[i]  = arr[mid+i];
    }
    int i =0,j=0, k=1;
    while(i<n1 and j<n2){
        if(a[i]<=b[j]){
            arr[k] = a[i];
            k++;j++;
        }
        else{
            arr[k] = b[j];
            inv += n1-i;
            
            k++;j++;
        }
    }
    while(i<n1){
        arr[k] = a[i];
        k++;j++;
    }
    while(j<n2){
        arr[k] = b[j];
        k++;j++;
    }
    return inv;
}

long long mergesort(int arr[],int l,int r){
    long long inv =0;
    if(l < r){
        int mid = (l+r)/2;
        inv +=mergesort(arr,1,mid);
        inv +=mergesort(arr,mid+1,r);
        inv +=mergesort(arr,1,mid,r);
        
    }
}

int32_t main(){
    int n;cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mergesort(arr,0,n-1);
    return 0;
}