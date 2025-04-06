#ifndef PLAYER
#define PLAYER
#include<string>
using namespace std;

class Player{
    private:
        const string playerName;
        int currentPosition;
    public:
        Player(const string& playerName);
        string getName() const;
        int getPosition() const;
        void setPosition(int newPosition);
};
#endif