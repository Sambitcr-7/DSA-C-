#include <iostream>

using namespace std;

int knapasck(int value[], int wt[], int n, int w){
    if(n==0 || w==0){
        return 0;
        
    }
    if(wt[n-1]>w){
        return knapasck(value, wt, n-1, w);
    }
    return max(knapasck(value,wt,n-1,w-wt[n-1])+value[n-1],knapasck(value ,wt,n-1,w));
}
int main()
{
    
    int wt[]={10,20,30};
    int value[]={100,50,150};
    int w=50;
    
    cout<<knapasck<<(wt,value,3,w)<<endl;
    return 0;
}
