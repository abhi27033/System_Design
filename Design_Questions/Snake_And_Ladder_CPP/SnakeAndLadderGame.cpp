#include "SnakeAndLadderGame.hpp"
#include <iostream>
using namespace std;
SnakeAndLadderGame::SnakeAndLadderGame(const vector<string>& playerNames): currentPlayerIndex(0) {
    for (const auto& name : playerNames) {
        players.push_back(name);
    }
}

void SnakeAndLadderGame::play() {
    while (!isGameOver()) {
        Player& player = players[currentPlayerIndex];
        int diceRoll = dice.getRoll();
        int newPosition = player.getPosition() + diceRoll;

        if (newPosition <= board.getBoardSize()) {
            int finalPosition = board.positionAfterSnakeOrLadder(newPosition);
            player.setPosition(finalPosition);
            std::cout << player.getName() << " rolled a " << diceRoll
                      << " and moved to position " << player.getPosition() << "\n";

            if (player.getPosition() == board.getBoardSize()) {
                std::cout << "Player " << player.getName() << " Wins!\n";
                return;
            }
        }
    
        currentPlayerIndex = (currentPlayerIndex + 1) % players.size();
    }
}

bool SnakeAndLadderGame::isGameOver() const {
    for (const Player& player : players) {
        if (player.getPosition() == board.getBoardSize()) {
            return true;
        }
    }
    return false;
}
