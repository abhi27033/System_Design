#ifndef LADDER
#define LADDER
class Ladder
{
    private:
        const int start;
        const int end;
    public:
        Ladder(int start,int end);
        int getStart() const;
        int getEnd() const;
};
#endif