#include <iostream>
#include <iterator>

void ChangeArray(uint16_t arr[5]);
/**
 * TOPIC: 6.2 — Arrays (Part II)
 * NOTES: Initializing the values in array
 * 1. Initialize all the value with empty curly braces to make all values in an array to zero.
 * 
 * 2. When the array is passed into the funtion not the copy of the array is passed instead the entire is passed
 * so the value changed inside the function will be affected in the array. 
 * */
namespace vTitan
{
enum letters
{
    a,
    b,
    c,
    d,
    e,
    maxi
};
}

using namespace std;
using namespace vTitan;
int main()
{

    uint16_t arr1[5];
    uint16_t arr2[]{0, 1, 2, 4, 4};
    uint16_t arr3[maxi];

    for (auto i = 0; i < maxi; ++i)
    {
        arr3[i] = i * i;
        std::cout << arr3[i] << "  ";
    }

    arr3[c] = 20;

    std::cout << std::endl;

    for (auto i = 0; i < (sizeof(arr2) / sizeof(arr2[0])); ++i)
    {
        std::cout << arr2[i] << "  ";
    }

    std::cout << std::endl;
    std::cout << "Size of arr1: " << sizeof(arr1) << std::endl;
    std::cout << "Size of arr2: " << sizeof(arr2) << std::endl;
    std::cout << "Size of arr3: " << sizeof(arr3) << std::endl;
    std::cout << "c: " << arr3[c] << std::endl;
    std::cout << "d: " << arr3[d] << std::endl;
    std::cout << std::endl;
    ChangeArray(arr3);
    std::cout << "After Changes: " << std::endl;
    for (auto i = 0; i < std::size(arr3); ++i)
    {
        std::cout << arr3[i] << "  ";
    }
    std::cout << std::endl;
    return 0;
}

void ChangeArray(uint16_t arr[5])
{
    std::cout << "Inside func: " << std::endl;
    for (auto i = 0; i < 5; ++i)
    {
        std::cout << arr[i] << "  ";
    }

    arr[3] = 10;
}