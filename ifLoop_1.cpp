/*
This is to know the basic if-else, elif loop condition
*/

#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter valid number: " << endl;
    cin >> a;

    if (a >= 10){
        cout<<"Given is greater than 10"<<endl;
    }  
    else if (a >= 5 && a < 10)
    {
        cout<<"Between 5 and 10"<<endl;
    }
    else
    {
        cout<<"not in ranga"<<endl;
    }
    return 0;
    
}