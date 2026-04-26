// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 
#include <iostream>

/* this is a simple C++ program
 from the Linked in Learning*/

 int add (int num1, int num2){
    int result;

    result = num1 + num2;

    return result;
 }
 
 
 
 int main () {

    std::cout << " Hi There" <<std::endl << "The add function" << std::endl ;

    int result = add(3.5, 5.5);

    std::cout << "The result is =" << result << std::endl;

    std::cout << std::endl <<std::endl;

    return 0; // always return from function
 }