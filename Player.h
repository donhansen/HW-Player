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
    string getName() const;
    int getHp() const;
    void printPlayer() const;
};
#endif


