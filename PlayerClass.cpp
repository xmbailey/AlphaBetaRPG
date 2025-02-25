/*
 * Author(s): Daniel Lebedev
 * Description: Instantiate the 3 valid player classes and their abilities.
 */
#include "PlayerClass.h"
#include <iostream>

void warriorAbility() {
    cout << "2x dmg" << endl;
}

void mageAbility() {
    cout << "Fireball" << endl;
}

void rogueAbility() {
    cout << "Always attack first" << endl;
}

const PlayerClass WARRIOR = {"Warrior", 80, warriorAbility};
const PlayerClass MAGE = {"Mage", 100, mageAbility};
const PlayerClass ROGUE = {"Rogue", 120, rogueAbility};
