// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class character_role {protagonist, antagonist, sidekick, npc};

//typedef int Score;

using Score = int;

struct game_character {
    std::string name;
    Score level;
    character_role role;
};

int main(){

    game_character buddy1, buddy2, buddy3;

    buddy1.name = "Tony";
    buddy2.name = "Steve";
    buddy3.name = "T'challa";

    buddy1.level = 5;
    buddy2.level = 10;
    buddy3.level = 3;

    buddy1.role = character_role::protagonist;
    buddy2.role = character_role::protagonist;
    buddy3.role = character_role::sidekick;

    std::cout << buddy1.name << " is a level " << buddy1.level << " character with a role of " << (int)buddy1.role << std::endl;

    std::cout << buddy2.name << " is a level " << buddy2.level << " character with a role of " << (int)buddy2.role << std::endl;

    std::cout << buddy3.name << " is a level " << buddy3.level << " character with a role of " << (int) buddy3.role << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
