// This is a partially implemeted code snippet
// int isPrime(int n)
// {
//     if (n == 1)
//     {
//         return 0;
//     }
//     for(int i = 2; i * i < n; i++)
//     {
//         if(n % i == 0)
//         return 0;
//     }

//     return 1;
// }

// 1. Fine the time complexity of the func 1 function in the program show in program1.c
#include<stdio.h>
void func1(int arry[], int length)
{
    int sum = 0;
    int product =1;
    for(int i = 0 ; i < length; i++)
    {
        sum += arry[i];
    }
    for (int i = 0; i < length; i++)
    {
        product *= arry[i];
    }
}

int main()
{
    int arr[] = {3,5,66};
    func1(arr, 3);
    return 0;
}

// 2. Fine the the complextiy of the func function int the program from program2.c
#include<stdio.h>
void func(int n)
{
    int sum = 0;
    int product =1;
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d, %d\n", i, j);
        }
    }
}

// 3.consider the recursive algorithm above , where the random(int n) spends one unit of the to return a random integer which is evenly distributed withen the range [0,n][0,n]
// if the average processing time is T(n) what is the value of T(6)

#include<stdio.h>
int function(int n)
{
    int i ;
    if(n <=0)
    {
        return 0;

    }
    else
    {
        int random(n-1);
        printf("this\n");
        return function(i) +function(n - 1 - i);
    }
}


//4.Which of the following are equivalent to o(N)?why?
//a) o(N+P), where p<N/9
//b) 0(9N+k)
//c) o(N+8log N)
//d)o(N + M2)
#include<stdio.h>
#include<stdlib.h>

int random(int a)
{
    int i;
    int num = (rand () % (a + 1));
    return num;
}
int function(int n)
{
    int i;

    if(n <= 0)
    {
        return 0;
    }
    else{
        i = random(n-1);
        printf("this\n");
        return function(i) + function(n-1-i);
    }
}

int main(){
    function(6);
    return 0;
}

//5.The following simple code sums the value of all the nodes in a balanced binary search tree.what is the 
//runtime?

//int sum(Node node)
// {
//     if(node == NULL)
//     {
//         return 0;
//     }
//     return sum(node.left) + node.value + sum(node.right);
// }

//6.Find the complexity of the following code which tests whether a give number is prime or not/

// int isPrime(int n){
//     if( n == 1){
//         return 0;
//     }
//     for(int i = 2; i * i i<n; i++){
//         if(n% i = 0)
//         return 0;
//     }

//     return 1;
// }

//7.what is the time complexty of the following snippet of code

// int isPrime(int n){
//     for(int i=2; i * i < 1000; i++){
//         if(n% i ==0)
//         return 0;
//     }
//     return 1;
// }

// isPrime();