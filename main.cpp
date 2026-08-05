#include <iostream>
#include <thread>
#include <chrono>
#include "Functions.h"

//g++ main.cpp Functions.cpp -o turnBasedRpg, This command is for compile usage only, delete on when this program is complete.

int main()
{
    /*
    Challenge mode: The constraints will be listed below.

    1. The program must include at most, 1 class.
    2. The program must include bitwise logic operators.
    */

    std::cout << "Sample title message. Valid only on startup.";
    std::cout << "\n--------------------------------------------------\n";
    

    PlayerMenu player;
    short player_choice;
/*
                 "1. Level selection\n"
              << "2. Skill Tree\n"
              << "3. Shop\n"
              << "4. Exit game";
*/
    
    do
    {
        player_choice = player.mainMenu();

        if(player_choice == 1)
        {
            player.levelSelect();
        }
        if(player_choice == 2)
        {
            player.skillTreeMenu();
        }
        if(player_choice == 3)
        {
            player.shop();
        }
        if(player_choice == 4)
        {
            std::cout << "------------------------------------------------------------\n"
                      << "Ending... See you next time!\n"
                      << "------------------------------------------------------------\n" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));

        }
        else
        {
            std::cout << "Congradulations for finding this bug! Please feel free to report this bug to the creator.\n";
        }
    } while (player_choice != 4);
    

    return 0;
}