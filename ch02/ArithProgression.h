#ifndef ARITHPROGRESSION_H
#define ARITHPROGRESSION_H

#include "Progression.h"

class ArithProgression : public Progression
{
public:
    ArithProgression(long i = 1);
protected:
    virtual long nextValue() override;
protected:
    long inc;
};




#endif
