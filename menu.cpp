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
    cout << attack << "\n" << magic << "\n" << items << endl;
}

void Menu::attackTab(unique_ptr<Character>& mainCharacte)
{
    cout << "ENEMIES: " << endl;
}

void Menu::magicTab(unique_ptr<Character>& mainCharacte)
{
    cout << "MAGIC TYPES:" << endl;
}

void Menu::itemsTab(unique_ptr<Character>& mainCharacte)
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