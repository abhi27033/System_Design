#ifndef SNAKEANDLADDERGAME_H
#define SNAKEANDLADDERGAME_H

#include <vector>
#include <string>
#include "Board.hpp"
#include "Player.hpp"
#include "Dice.hpp"

class SnakeAndLadderGame {
private:
    std::vector<Player> players;
    Board board;
    Dice dice;
    int currentPlayerIndex;
    bool isGameOver() const;

public:
    SnakeAndLadderGame(const std::vector<std::string>& playerNames);
    void play();
};

#endif