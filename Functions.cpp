#include <iostream>
#include "Functions.h"

short PlayerMenu::inputValidation()
{
    short user_input;

    while(!(std::cin >> user_input))
    {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "--------------------------------------------------\n"
                  << "That option isn't available, please try again by inputing a number.\n";

    }

    std::cout << "--------------------------------------------------\n";
    return user_input;
}
short PlayerMenu::mainMenu()
{
    std::cout << "--------------------------------------------------\n"
              << "1. Level selection\n"
              << "2. Skill Tree\n"
              << "3. Shop\n"
              << "4. Exit game\n";
    std::cout << "--------------------------------------------------\n";

    short user_input = inputValidation();

    return user_input;
}
void PlayerMenu::levelSelect()
{
    std::cout << "--------------------------------------------------\n"
              << "Please select from the following levels, by typing the level number.\n"
              << "--------------------------------------------------\n"
              << "[Level 1] Whispering Plains\n"
              << "[Level 2] Goblin Camp Invasion\n"
              << "[Level 3] Maw Of The Mountain\n"
              << "[Level 4] Shadows Of The Groto\n"
              << "[Level 5] Ridged Snow Freeze\n"
              << "[Level 6] Ice Lake Pass\n"
              << "[Level 7] Misty Maze\n"
              << "[Level 8] Sancutary Visit\n"
              << "[Level 9] Chared scorched forest\n"
              << "[Level 10] Path Of The Flames\n";
    std::cout << "--------------------------------------------------\n";
}
void PlayerMenu::skillTreeMenu()
{
    std::cout << "--------------------------------------------------\n";
    
    if(current_skills == 1)
    {
        
    }
}
void PlayerMenu::combat()
{

}
void PlayerMenu::shop()
{

}
void PlayerMenu::closeGame()
{

}