#include "Player.h"
#include <iostream>

using namespace std;

int main()
{

    // instantiate the player
    Player player("L. Jenkins", 100);
    player.printPlayer();

    player.setName("GailForceWinds");
    player.setHp(50);

    printf("| %s hp: %d |\n", player.getName().c_str(), player.getHp());
    return 0;
}