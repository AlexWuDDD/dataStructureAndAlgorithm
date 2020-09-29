#ifndef PROGRESSION_H
#define PROGRESSION_H

class Progression
{
public:
    Progression(long f = 0);
    virtual ~Progression();
    void printProgression(int n);
protected:
    virtual long firstValue();
    virtual long nextValue();
protected:
    long first;
    long cur;
private:
};





#endif
