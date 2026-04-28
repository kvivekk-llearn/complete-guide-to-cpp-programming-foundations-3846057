#include <iostream>

void displayScore (const std::string& playername, int score)
{
    static int player_score =0;

    player_score = score+player_score;
    std::cout << "Player  " << playername << "score =" << player_score << std::endl;

}

std::string get_name(std::string& playername){
    std::cout << "Enter Player Name " << std::flush;
    std::cin >> playername;
    return playername;
}

inline constexpr int get_experience(int level){ // This will be placed in main function because inline is used
    return level * level;
}


int main(){
    const int default_score = 100;
    const int val = 10;
    constexpr int experience = get_experience(val);

    std::string playername;

    get_name(playername);
    displayScore(playername, default_score);

    displayScore(playername, default_score);
    displayScore(playername, 0);
    std::cout << std::endl;
    std::cout << "Experience = " << experience << std::endl;


}