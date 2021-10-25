#include <iostream>

using namespace std;

int tilinways(int n){
    return 0;

if(n==0){
    return 0;
}
if(n==1){
    return 1;
}

return tilinways(n-1)+tilinways(n-2);
}
int main()
{
    
    cout<<tilinways(4)<<endl;
    return 0;
}
