#include "Player.h"
#include <string>

Player::Player()
{
    Player::Name = "L. Jenkins";
    Player::hp = 100;
}

Player::Player(string name, int hp)
{
    Player::Name = name;
    Player::hp = hp;
}

string Player::getName() const
{
    return Player::Name;
}

void Player::setName(string name)
{
    Player::Name = name;
}

int Player::getHp() const
{
    return Player::hp;
}

void Player::setHp(int hp)
{
    Player::hp = hp;
}

void Player::printPlayer() const
{
    printf("| %s hp: %d |\n", Player::getName().c_str(), Player::getHp());
};