#include <iostream>

/**
 * TOPIC: 6.1 — Arrays (Part I)
 * NOTE: 
 * 1. The length should be given priorly. As per the standard, 
 * it may support dur to C99 compatibility 
 * 
 * 2. There are two types of array. One is static array and other 
 * is dynamic array. Static array requires perdefined length size 
 * whereas the dynamic can be fixed at runtime. 
 * It will be in chapter 6.15
 * 
 * SUMMARY: Fixed arrays provide an easy way to allocate and use 
 * multiple variables of the same type so long as the length of 
 * the array is known at compile time.
 * */

int main(){

    // Usual Method
    uint8_t array2[5];

    // using an enumerator
    enum sizeArray{
        MAX_SIZE_ARRAY = 5
    };

    uint8_t array1[MAX_SIZE_ARRAY];

    std::cout << "size: " << sizeof(array1) << std::endl;
    std::cout << "size: " << sizeof(array2) << std::endl;

    return 0;
}       