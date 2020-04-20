/*
This code is using ternary operataor inplace of if-else condition
*/
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int a;
    string b;
    cin >> a;
    b = a >= 10 ? "True" : "False";
    cout << "the value is: " << a << "   "<< b << endl;
    return 0;
}