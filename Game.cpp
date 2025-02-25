/*
 * Author(s): Daniel Lebedev
 * Description: Handles game logic.
 */

#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

class Game {
public:

    // UNFINISHED. NEEDS TO LOOP UNTIL GAME OVER (when currHealth = 0 or game is beat)
    void gameLoop(Player player) {
        string selection;

        while (true) {
            cout << "What would you like to do next (q to quit):" << endl;
            cout << "1 - Open Map" << endl;
            cout << "2 - Open Inventory" << endl;
            cout << "3 - COMBAT/TRADE" << endl;
            cin >> selection;

            if (selection == "1") {
                cout << "Opening Map..." << endl;
                break;
            } else if (selection == "2") {
                cout << "Opening Inventory..." << endl;
                player.displayInventory();
                break;
            } else if (selection == "3") {
                cout << "Combat/Trading..." << endl;
                break;
            } else {
                cout << "Invalid selection! Try again!" << endl;
            }
        }
    }

    // Runs when game starts, creates player with selected info
    Player startGame() {
        string name, classSelection;
        PlayerClass playerClass;
        Item* starterWeapon;

        cout << "Welcome! Please enter your desired name: " << endl;
        cin >> name;

        // Loop until valid input
        while (true) {
            cout << "Please select your desired class: " << endl;
            cout << "1 - Warrior" << endl;
            cout << "2 - Mage" << endl;
            cout << "3 - Rogue" << endl;
            cin >> classSelection;

            // Set class to warrior and give player club
            if (classSelection == "1") {
                starterWeapon = &CLUB;
                Player player(name, WARRIOR);
                player.addItem(starterWeapon);
                return player;
            // Set class to mage and give player staff
            } else if (classSelection == "2") {
                starterWeapon = &STAFF;
                Player player(name, MAGE);
                player.addItem(starterWeapon);
                return player;
            // Set class to rogue and give player dagger
            } else if (classSelection == "3") {
                starterWeapon = &DAGGER;
                Player player(name, ROGUE);
                player.addItem(starterWeapon);
                return player;
            // Handle invalid input
            } else {
                cout << "Invalid selection! Try again!" << endl;
            }
        }
    }

};
