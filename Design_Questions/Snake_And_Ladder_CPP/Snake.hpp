#ifndef SNAKE
#define SNAKE
class Snake{
    private:
        const int start;
        const int end;
    public:
        Snake(int start,int end);
        int getStart() const;
        int getEnd() const;
};
#endif