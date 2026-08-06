#ifndef FUNCTIONS_H
#define FUNCTIONS_H

class PlayerMenu
{
    private:
        const int heal = 1;             //cost 1 mana
        const int fire_ball = 2;        //Unlocked at level 3, cost 3 mana
        const int blizzard = 4;         //Unlocked at level 5, cost 5 mana
        const int lightning_bolt = 8;   //Unlocked at level 7, cost 7 mana
        
        const int attack = 1;           //cost no mana, scales damage each level
        const int charged_attack = 2;   //Unlocked at level 2, cost 1 mana
        const int flurry_rush = 4;      //Unlocked at level 4, cost 2 mana
        const int blade_tornado = 8;    //Unlocked at level 6, cost 3 mana, leaves player tired for a few turns

        int health = 100;               //Level 2: 120, level 3: 140, level 4: 170, level 5: 190, level 6: 210, level 7: 240
        int mana_pool = 5;              //Level 2: 5, level 3: 6, level 4: 6, level 5: 7, level 6: 7, level 7: 8
        
        int current_spells = 1;
        int attack_options = 1;

        int current_level = 1;

    public:

    short inputValidation();
    short mainMenu();
    void levelSelect();
    void skillTreeMenu();
    void shop();
    void combat();
    void closeGame();
};



#endif
