#include"Board.hpp"

Board::Board(){
    initializeBoard();
}

void Board::initializeBoard(){
    snakes.push_back(Snake(16, 6));
    snakes.push_back(Snake(48, 26));
    snakes.push_back(Snake(64, 60));
    snakes.push_back(Snake(93, 73));

    ladders.push_back(Ladder(1, 38));
    ladders.push_back(Ladder(4, 14));
    ladders.push_back(Ladder(9, 31));
    ladders.push_back(Ladder(21, 42));
    ladders.push_back(Ladder(28, 84));
    ladders.push_back(Ladder(51, 67));
    ladders.push_back(Ladder(80, 99));
}

int Board::getBoardSize() const{
    return MAX_SIZE;
}

int Board::positionAfterSnakeOrLadder(int currentPosition) const{
    for (const Snake& snake : snakes) {
        if (snake.getStart() == currentPosition) {
            return snake.getEnd();
        }
    }
    for (const Ladder& ladder : ladders) {
        if (ladder.getStart() == currentPosition) {
            return ladder.getEnd();
        }
    }
    return currentPosition;
}
