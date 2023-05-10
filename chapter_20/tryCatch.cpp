#include <iostream>

int main(){
    try{
        throw -1;
    }
    catch(int i){
        std::cerr << "intValue" << '\n';
    }
}