#include "Player.h"
#include <string>

Player::Player()
{
    Name = "L. Jenkins";
    hp = 100;
}


string Player::getName() const
{
    return Name;
}

int Player::getHp() const
{
    return hp;
}

void Player::printPlayer() const
{
    printf("| %s hp: %d |\n", Player::getName().c_str(), Player::getHp());
};