#include "Player.hpp"
#include<string>
using namespace std;
Player::Player(const string& name):playerName(name),currentPosition(0){}
string Player::getName() const{
    return playerName;
}
int Player::getPosition() const{
    return currentPosition;
}
void Player::setPosition(int newPosition){
    currentPosition = newPosition;
}
