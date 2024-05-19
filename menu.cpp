#include "menu.h"
#include <iostream>

using namespace std;

Menu::Menu()
{
}

Menu::~Menu()
{

}

void Menu::mainTab()
{
    cout << "--------------------------------------------------\n" << attack << "\n" << magic << "\n" << items << "\n" << "Input: ";
}

void Menu::attackTab(unique_ptr<Character>& mainCharacter)
{
    cout << "ENEMIES: " << endl;
}

void Menu::magicTab(unique_ptr<Character>& mainCharacter)
{
    cout << "MAGIC TYPES:" << endl;
}

void Menu::itemsTab(unique_ptr<Character>& mainCharacter)
{
    cout << "ITEMS:" << endl;
}

void Menu::checkInput(unique_ptr<Character>& mainCharacter, string input)
{
    if(input == "Attack")
    {
        attackTab(mainCharacter);
    }
    else if(input == "Magic")
    {
        magicTab(mainCharacter);
    }
    else if(input == "Items")
    {
        itemsTab(mainCharacter);
    }
}