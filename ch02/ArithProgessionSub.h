#ifndef ARITHPROGRESSIONSUB_H
#define ARITHPROGRESSIONSUB_H

#include "ArithProgression.h"


class ArithProgressionSub : public ArithProgression
{
public:
    ArithProgressionSub(long i = 1): ArithProgression(i){};
    long getNextValue()
    {
        return nextValue();
    }
private:
    
};



#endif
