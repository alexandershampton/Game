#include <iostream>
#include <cstdlib>
#include <ctime>
#include "character.h"

using namespace std;

//This functions asks for character data, creates a character, and returns a character
Character characterCreator()
{

    //Character data variables
    string characterName = "SHAM G"; //the character's name
    int characterHP = 100; //the character's health, if it reaches 0 or below, the character dies

    //Creates Character
    Character character(characterName, characterHP, 0, 1, 100);

    return(character);
}

// main() creates character's and simulates them fighting
int main()
{
    Character character1 = characterCreator(); //Creates character1
    srand(time (nullptr)); //seeds time into rand
    character1.print(cout);
    // //Loop for combat until a character's HP reaches 0 or below 0
    // while (character1.getHealth()>0 && character2.getHealth()>0){
    //     character1.attack(character2);
    //     if (character2.getHealth()>0){
    //         character2.attack(character1);
    //     }
    // }

    // //Conditionals that check which character wins by checking HP
    // if (character1.getHealth() == 0){
    //     cout << character2.getName() << " wins!" << endl;
    // }else{
    //     cout <<  character1.getName() << " wins!" << endl;

    //}
    return 0;
}