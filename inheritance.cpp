#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Box
{
private:
    int length, breadth, height;
    friend void extractData(Box &d);

public:
    int shape;
    Box()
    {
        cout << "Default Called" << endl;
        length = 0;
        breadth = 0;
        height = 0;
    }

    void setData(int l, int b, int h);
    void displayData();

    ~Box()
    {
        cout << "destructor called" << endl;
    }
};

class Box2 : public Box{

};

void Box::setData(int l, int b, int h = 0)
{
    length = l;
    breadth = b;
    height = h;
}

void Box::displayData()
{
    cout << "Lenght : " << length << endl;
    cout << "Breadth : " << breadth << endl;
    cout << "Height : " << height << endl
         << endl;
}

void extractData(Box &d)
{
    d.length = 99;
}

class toy : public Box
{
public:

};

int main()
{
    cout << "Welcome" << endl;
    Box rect;
    Box2 sqe;
    rect.setData(5, 10, 15);
    cout << "the original value is " << endl
         << endl;
    rect.displayData();
    extractData(rect);
    cout << "the changed value is " << endl
         << endl;
    rect.displayData();

    sqe.setData(5, 10, 30);
    cout << "the square value is " << endl << endl;
    sqe.displayData();

    return 0;
}