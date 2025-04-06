#include "SnakeAndLadderGame.hpp"
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    // Define player names
    vector<string> playerNames = {"Abhishek", "Deepak", "Atharva"};

    // Create a SnakeAndLadderGame instance and start the game
    SnakeAndLadderGame game(playerNames);
    game.play();

    return 0;
}
