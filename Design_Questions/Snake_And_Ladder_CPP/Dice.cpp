#include "Dice.hpp"
#include<cstdlib>

using namespace std;
int Dice :: getRoll() const{
    return (rand()%(MAX_VALUE-MIN_VALUE+1))+MIN_VALUE;
}