#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Stack
{
private:
    int front;
    int arr[5];
    int len = sizeof(arr) / sizeof(arr[0]);

public:
    Stack()
    {
        cout << "Default" << endl;
        front = -1;
        for (int i = 0; i < len; ++i)
        {
            arr[i] = 0;
        }
    }

    bool isFull()
    {
        if (front == (len - 1))
        {
            cout << "Stack is Full" << endl;
            return true;
        }
        else
        {
            cout << "Stack is not full" << endl;
            return false;
        }
    }

    bool isEmpty()
    {
        if (front == -1)
        {
            cout << "Stack is Empty" << endl;
            return true;
        }
        else
        {
            cout << "Stack is not empty" << endl;
            return false;
        }
    }

    void insertVal(int val)
    {
        if (isFull())
        {
            cout << "Full can't insert" << endl;
            return;
        }
        else
        {
            front++;
            arr[front] = val;
            displayArray();
        }
    }

    void displayArray()
    {
        for (int i = (len - 1); i >= 0; --i)
        {
            cout << arr[i] << endl;
        }
    }

    void ChangeValue(int pos, int val){
        if (pos < len)
           arr[pos] = val;
        else
        {
            cout << "invalid pos" << endl;
        }
        
    }

    ~Stack()
    {
        displayArray();
        cout << "Destructor Called" << endl;
    }
};

int main(int argc, char const *argv[])
{
    cout << "Welcome" << endl;
    cout << "Enter 1: Display,2: Full ,3: Empty ,4: InsertValue" << endl;
    int option, val, pos;
    cin >> option;
    Stack a;

    switch (option)
    {
    case 1:
        cout << "Option 1 is entered" << endl;
        a.displayArray();
        break;

    case 2:
        cout << "Option 2 is Entered" << endl;
        a.isFull();
        break;

    case 3:
        cout << "Option 3 is entered" << endl;
        a.isEmpty();
        break;

    case 4:
        cout << "Option 4 is Entered: Enter Val" << endl;
        cin >> val;
        a.insertVal(val);
        break;
    
    case 5:
        cout << "Option 5 is Entered: Enter Val" << endl;
        cin >> pos >> val;
        a.ChangeValue(pos, val);
        break;

    default:
        cout << "invalid" << endl;
        break;
    }
    return 0;
}
