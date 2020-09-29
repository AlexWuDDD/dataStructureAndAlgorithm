#ifndef OTHEREXCEPTIONS_H
#define OTHEREXCEPTIONS_H

#include "MathException.h"

class ZeroDivide : public MathException
{
public:
    ZeroDivide(const string& err)
        :MathException(err){};
};

class NegativeRoot : public MathException
{
public:
    NegativeRoot(const string& err)
        :MathException(err){}
};





#endif
