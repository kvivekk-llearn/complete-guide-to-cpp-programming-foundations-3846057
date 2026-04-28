// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    
    float Target_x = -123.45f;
    int32_t Sprite_x;
    uint32_t Player_x;

    Sprite_x = Target_x;
    Player_x = Sprite_x;

    std::cout << "Target_x = " << Target_x << std::endl;
    std::cout << "Sprite_x = " << Sprite_x << std::endl;
    std::cout << "Player_x = " << static_cast <int32_t> (Player_x) << std::endl;



    std::cout << std::endl << std::endl;
    return 0;
}
