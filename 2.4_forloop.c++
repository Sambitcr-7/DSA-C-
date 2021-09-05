
// Example 1    forloop -----
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int sum=0;
    for(int counter=1;counter<=n;counter++){
        sum=sum+counter;
    }
    cout<<sum<<endl;

    return 0;
}



//Example 2 while loop---
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n>0){
        cout<<n<<endl;
        cin>>n;
    }

    return 0;
}



// Example 3    do while loop ----
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    do{
        cout<<n<<endl;
        cin>>n;
    }while(n>0);

    return 0;
}
