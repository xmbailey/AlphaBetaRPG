// Author: Xavier Bailey - xmbailey@dmacc.edu
// Enemies Stats/Abilities

#include "Enemies.h"
Enemy::Enemy(string n, int h, int d, string w, string a)
    : name(n), health(h), damage(d), weapon(w), ability(a) {
}

void Enemy::attack() {
    cout << name << " attacks and deals " << damage << " damage with " << weapon << "!\n" << endl;
}

void Enemy::specialAbility() {
    cout << name << " has used " << ability << ".\n" << endl;
}

// GhostKnight - Stats/Abilities
GhostKnight::GhostKnight() 
    : Enemy("Ghost Knight", 100, 15, "soul sword", "Haunting Strike") {
}

void GhostKnight::specialAbility() { 
    cout << name << " has used " << ability << ".\n" << endl;
    cout << name << " performs a haunting strike that deals massive damage and causes the player to become frightened, reducing their attack power temporarily!\n" << endl;
}

// Skeleton - Stats/Abilities
Skeleton::Skeleton()
    : Enemy("Skeleton", 75, 10, "bone sword", "Bone Cage") {
}

void Skeleton::specialAbility() {
    cout << name << " has used " << ability << ".\n" << endl;
    cout << name << " summons a cage of bones that traps and damages the player!\n" << endl;
}

// Goblin - Stats/Abilities
Goblin::Goblin()
    : Enemy("Goblin", 60, 8, "dagger", "Poison Stab") {
}

void Goblin::specialAbility() {
    cout << name << " has used " << ability << ".\n" << endl;
    cout << name << " stabs the player with a poisoned dagger, dealing damage over time!\n" << endl;
}
// SwarmOfBats - Stats/Abilities
SwarmOfBats::SwarmOfBats()
    : Enemy("The Swarm of Bats", 50, 10, "sharp fangs", "Sonic Screech") {
}

void SwarmOfBats::specialAbility() {
    cout << name << " has used " << ability << ".\n" << endl;
    cout << name << " stuns the player with a burst of sound, reducing their accuracy!\n" << endl;
}

// DarkMage - Stats/Abilities
DarkMage::DarkMage()
    : Enemy("Dark Mage", 90, 12, "staff", "Shadow Bolt") {
}


void DarkMage::specialAbility() {
    cout << name << " has used " << ability << ".\n" << endl;
    cout << name << " casts a powerful shadow bolt that drastically drains the player's health over time!\n" << endl;
}

// Instantiate predefined bosses
GhostKnight GHOSTKNIGHT;
Skeleton SKELETON;
Goblin GOBLIN;
SwarmOfBats SWARMOFBATS;
DarkMage DARKMAGE;
