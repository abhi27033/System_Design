#include "Snake.hpp"

Snake::Snake(int start,int end): start(start), end(end){}

int Snake::getStart() const{
    return start;
}

int Snake::getEnd() const{
    return end;
}