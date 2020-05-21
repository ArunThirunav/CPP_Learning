#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    cout << "Welcome" << endl;
    string arr;
    // string arr;
    cin >> arr;

    std::ofstream myfile("aer.txt");
    myfile << arr;
    myfile.close();

    cout << "Completed" << endl;

    return 0;
}