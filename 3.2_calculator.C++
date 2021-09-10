//multiple languages rebot
#include <iostream>
using namespace std;

int main() {
    float n1, n2;
    cout <<"Input 2 number:";
    cin >> n1 >> n2;
    
    char op;
    cout << "Input an operator";
    cin >> op;
    switch (op)
    {
        case '+':
        break;
        cout << n1 + n2 <<endl;
        break;
        case '-':
        cout << n1 - n2 << endl;
        break;
        case '/':
        cout << n1 / n2 << endl;
        break;
        case '*':
        cout << n1 * n2 << endl;
        break;
        
        default:
        cout<<"Enter another operator"<<endl;
        break;
    }
    return 0;
}