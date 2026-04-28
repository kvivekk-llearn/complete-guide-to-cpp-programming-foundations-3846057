// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class asset_type {texture, sound, animation, script};
enum class menu_selection {background, music, sound, control, texture}; 

int main(){
    asset_type asset_value;
    menu_selection menu_val;


    
    asset_value = asset_type::sound;
    menu_val = menu_selection::sound;

    int sound = 10;

   

    std::cout << "asset_value = " << (int) asset_value << std::endl;
    std::cout << " menu_sel = " << (int) menu_val << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
