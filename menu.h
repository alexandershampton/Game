#include <string>
#include <memory>
#include "character.h"

using namespace std;
//Declaration class Character
class Menu
{
//Character private variables
private:
    string attack = "Attack";
    string magic = "Magic";
    string items = "Items";
    string back = "Back";

//Character methods and constructor
public:
    Menu();
    ~Menu();
    void mainTab();
    void attackTab(unique_ptr<Character>& mainCharacter);
    void magicTab(unique_ptr<Character>& mainCharacter);
    void itemsTab(unique_ptr<Character>& mainCharacterr);
    void checkInput(unique_ptr<Character>& mainCharacterr, string input);
};