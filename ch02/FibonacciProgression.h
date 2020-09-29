#ifndef FIBONACCIPROGRESSION_H
#define FIBONACCIPROGRESSION_H

#include "Progression.h"

class FibonacciProgression : public Progression
{
public:
    FibonacciProgression(long f = 0, long s = 1);
protected:
    virtual long firstValue() override;
    virtual long nextValue() override;
protected:
    long second;
    long prev;
    
};

#endif
