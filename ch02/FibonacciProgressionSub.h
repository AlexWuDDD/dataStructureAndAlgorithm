#ifndef FIBONACCIPROGRESSIONSUB_H
#define FIBONACCIPROGRESSIONSUB_H

#include "FibonacciProgression.h"

class FibonacciProgressionSub : public FibonacciProgression
{
public:
    FibonacciProgressionSub(long f = 0, long s = 1)
        :FibonacciProgression(f, s)
    {}
    
    long getValueOfNth(int n)
    {
        for(int i = 0; i < n-2; ++i){
            nextValue();
        }
        return nextValue();
    }
};



#endif
