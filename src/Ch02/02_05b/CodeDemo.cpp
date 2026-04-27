// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5;

int main(){
    
    a= 7;
    bool my_flag = false;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "my_flag = " << my_flag << std::endl;

    my_flag=true;

    std::cout << "a+b = " << a+b << std::endl;
    std::cout << "b-a = " << b-a << std::endl;
    std::cout << "my_flag = " << my_flag << std::endl;

    unsigned positive;

    positive = b-a;

    std::cout << "unsigned b-a = " << positive << std::endl;



    std::cout << std::endl << std::endl;
    return 0;
}
