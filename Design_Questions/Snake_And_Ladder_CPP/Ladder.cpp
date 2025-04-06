#include "Ladder.hpp"
Ladder::Ladder(int start,int end):start(start),end(end){}
int Ladder::getStart() const{
    return start;
}
int Ladder::getEnd() const{
    return end;
}