#include "character.h"
#include <iostream>

using namespace std;

//Character constructor
Character::Character(const string newName,  const int newHP, const int newXP, const int newXPLevel, const int newXPRemaining):
    name(newName),
    hp(newHP),
    xp(newXP),
    xpLevel(newXPLevel),
    xpRemaining(newXPRemaining)
{
}    
   
Character::~Character()
{
}
//This method makes a Character attack another character based off of random die rolls
void Character::attack(Character &otherCharacter)
{
    cout << name << " attacks " << otherCharacter.getName() << endl; 
}

    //This method subtracts the damage done to the Character's HP 
void Character::damage(int amount)
{
        if (hp-amount>=0){
            hp -= amount;

        }else{
            hp = 0;
        }
}

    //Returns the health of the Character
int Character::getHealth() const
{
        return(hp);
}

    //Returns the name of the Character
string Character::getName() const
{
        return(name);
}

int Character::getXP()
{
    return(xp);
}

int Character::getXPLevel()
{
    return(xpLevel);
}
int Character::getXPRemaining()
{
    return(xpRemaining);
}

    //Outputs the character to a ostream
void Character::print(ostream& os)
{
        os << "\nGained XP\n-----------------" << endl;
        os << getName() << endl;
        os << "HP: " << getHealth() << endl;
        os << "Level: " << getXPLevel() << endl;
        os << "XP: " << getXP() << " | " << getXPRemaining() << endl;
}