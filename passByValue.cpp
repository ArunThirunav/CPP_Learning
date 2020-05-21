#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;

    // return(x, y);
}

int main(){
    cout << "Welcome" << endl;
    int a = 1, b = 2;

    cout << "B4  : " << a << " " << b << endl;
    swap(a,b);
    cout << "After  : " << a << " " << b << endl;

    return 0;
}