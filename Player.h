#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;
class Player
{
    private:
    int hp;
    string Name;
    
    public:
    Player();
    Player(string name, int hp);
    string getName() const;
    void setName(string name);
    int getHp() const;
    void setHp(int hp);
    void printPlayer() const;
};
#endif


