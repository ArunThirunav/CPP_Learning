#include <bitset>
#include <iostream>

int main(){
    /* O1 Understand what is bitset */
    std::bitset<8> bits{0b1000'0001};
    std::bitset<8> bits5{0b1000'0001};
    std::cout<< bits.count() << std::endl; /* Will repsond how many bits are set */
    std::cout<< bits.test(2) << std::endl; /* respond the status of the certain bit */
    std::cout << sizeof(bits) << std::endl; 
    std::cout << std::endl;
    
    /* Use of Bitwise Operator */
    std::bitset<4> bit2{0b0001};
    std::cout << (bit2<<1) << std::endl;
    std::cout << ~(bit2<<1) << std::endl;
    std::cout << (bit2<<1) << std::endl;
    std::cout << std::endl;

    std::bitset<4>bit3{0b0001};
    std::bitset<4>bit4{0b0111};

    /* OR Operator */
    std::cout << "bit3 OR bit4  " << (bit3 | bit4) << std::endl;
    std::cout << std::endl;

    /* AND Operator */
    std::cout << "bit3 OR bit4  " << (bit3 & bit4) << std::endl;
    std::cout << std::endl;

    /* XOR Operator */
    std::cout << "bit3 Value: " << bit3 << std::endl;
    std::cout << "bit3 OR bit4  " << (bit3 ^= bit4) << std::endl;
    std::cout << "bit3 Value: " << bit3 << std::endl;
    std::cout << std::endl;

    return 0;
}