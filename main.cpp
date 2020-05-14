#include <iostream>
#include <string>
#include "ClassRoom.cpp"

using namespace std;

class ClassStrength : public ClassRoom
{
public:
	int classStrength()
	{
		return (boys * girls);
	}
};

class Shape
{
public:
	int length{};
	int breadth{};
	int height{};

	Shape()
	{
		length = 0;
		breadth = 0;
		height = 0;
		cout << "Default" << endl;
	}

	Shape(int l, int b, int h)
	{
		cout << "Parametrized" << endl;
		length = l;
		breadth = b;
		height = h;
	}

	int area()
	{
		return (length * breadth);
	}

	~Shape()
	{
		cout << "Dest" << endl;
	}
};

int main()
{

	ClassStrength Class12;
	Shape squ;
	Shape rect{10, 12, 30};
	int a, c;

	// cout << "Enter No of Boys: \n";
	// cin >> a;
	// cout << "Enter No. of Girls: \n";
	// cin >> c;

	// Class12.setBoys(a);
	// Class12.setGirls(c);

	// cout << "**************************\n" << endl;
	// cout << "**************************\n" << endl;
	// cout << "the strength of class is " << Class12.classStrength() << endl;
	// cout << "\n**************************" << endl;

	int l, b, h;
	cout << "enter length, breadth, height" << endl;
	cin >> l >> b >> h;

	squ.length = 10;
	squ.breadth = 20;
	squ.height = 30;

	cout << "Area of Rect is: " << rect.area() << endl;
	cout << "Area of Square is : " << squ.area() << endl;

	return 0;
}