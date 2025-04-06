#ifndef DICE_H
#define DICE_H
class Dice{
    private:
        const int MIN_VALUE = 1;
        const int MAX_VALUE = 6;
    public:
        int getRoll() const;
};
#endif