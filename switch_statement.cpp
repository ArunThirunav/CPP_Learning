#include <iostream>
#include<string.h>
using namespace std;

int main(){
    int a;
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "the value is:" << a << endl;
        break;
    
    default:
        cout << "Invalid Entry" << endl;
        break;
    }
    return 0;
}