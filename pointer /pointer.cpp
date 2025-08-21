#include <iostream>

int main() {
    int a = 10;
    int *aptr;
    aptr = &a;
    
    std::cout<<&a<<std::endl;
    std::cout<<aptr<<std::endl;
    
    std::cout<<*aptr<<std::endl;
    
    

    return 0;
}
