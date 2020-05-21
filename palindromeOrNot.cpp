#include <iostream>
using namespace std;

int main()
{
    cout << "Enter Number" << endl;
    int n, num, digit, rev = 0;
    cin >> num;
    n = num;

    while (num != 0)
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }

    if (n == rev)
    {
        cout << "Palindrome" << endl;
    }

    else
    {
        cout << "not Palindrome" << endl;
    }

    return 0;
}