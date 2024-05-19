#include <string>
using namespace std;
//Declaration class Character
class Character
{
//Character private variables
private:
    string name;
    int hp;
    int xp;
    int xpLevel;
    int xpRemaining;

//Character methods and constructor
public:
    Character(const string newName, const int newHP, const int newXP, const int newXPRemaining, const int newXPLevel);
    ~Character();
    void print(ostream&) ;
    void attack(Character &otherCharacter) ;
    void damage(int amount) ;
    int getHealth() const;
    string getName() const;
    int getXP();
    int getXPLevel();
    int getXPRemaining();
};