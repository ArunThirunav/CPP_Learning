#include <iostream>
using namespace std;

template <typename T, typename U>
T add(U a, T b){
    return (a+b);
}

template <typename T>
class Box
{
private:
    T length, breadth, height;

public:
    Box() {
        length = 0;
        breadth = 0;
        height = 0;
    }
    
     ~Box() {
        cout << "Destr Called" << endl;
    }

    int area(T le, T ht, T bd){
        length = le;
        breadth = bd;
        height = ht;
        return (length + breadth + height);
    }
};

int main(){
    cout << "Welcome" << endl << endl;

    cout << "Sums is: " << add(5, 6.1627f) << endl;
    Box <int> square1;
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Area is : " << square1.area(a, b, c) << endl;
    
    return 0;
}