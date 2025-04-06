    #ifndef BOARD
    #define BOARD
    #include "Snake.hpp"
    #include "Ladder.hpp"
    #include <vector>
    using namespace std;
    class Board{
        private:
            vector<Snake> snakes;
            vector<Ladder> ladders;
            const int MAX_SIZE=100;
            void initializeBoard();
        public:
            Board();
            int getBoardSize() const;
            int positionAfterSnakeOrLadder(int currentPosition) const;
    };
    #endif