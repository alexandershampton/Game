#include <iostream>
#include <cstdlib>
#include <ctime>
#include <memory>
#include "menu.h"

using namespace std;

void getInput(unique_ptr<Character>& mainCharacter)
{
    string stringInput;
    unique_ptr<Menu> menu = make_unique<Menu>();
    
    while(!((stringInput == "Attack") || (stringInput == "Magic") || (stringInput == "Item")))
    {
        menu->mainTab();
        cin >> stringInput;
    }

    cout << "\n";
    system("clear");
    menu->checkInput(mainCharacter, stringInput);
}

void level1(unique_ptr<Character>& mainCharacter)
{
    cout << "In level 1" << endl;
    getInput(mainCharacter);
}
// main() creates character's and simulates them fighting
int main()
{
    // Character character1 = characterCreator(); //Creates character1
    unique_ptr<Character> mainCharacter = make_unique<Character>("Main Character", 100, 0, 1, 100);
    srand(time (nullptr)); //seeds time into rand
    mainCharacter->print(cout);
    level1(mainCharacter);
    return 0;
}