#ifndef FUNCTIONS_H
#define FUNCTIONS_H

class PlayerMenu
{
    private:
        const int heal = 1;
        const int fire_ball = 2;
        const int blizzard = 4;
        const int lightning_bolt = 8;
        
        int health = 100;
        int mana_pool = 5;
        int current_skills = 1;
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