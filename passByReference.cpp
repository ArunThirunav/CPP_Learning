#include <iostream>
using namespace std;

void increment(int& val){
    val = val+1;
}

int main(void)
{
    cout << "Hello" << endl;
    int a = 5;
    int &r = a;

    increment (a);

    cout << a << endl;
    // cout << r << endl;

    return 0;
}
