#include <iostream>
using namespace std;

void countsort(int arr[], int n){
    
    int k=arr[0];
    for(int i=0;i<n;i++){
    k=max(k,arr[i]);
    
    
}
int count[10]={0};
for(int i=0; i<n;i++){
    count[arr[i]]++;
}
int output[n];
for(int i=n-1;i>=0;i++){
    output[--count[arr[i]]]=arr[i];
}
for(int i=0;i<n;i++){
    arr[i]=output[i];
    
}
