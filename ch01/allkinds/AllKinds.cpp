#include "AllKinds.h"


AllKinds::AllKinds(int num1, long num2, float num3)
{
    if(num1 == 0 || num2 == 0 || num3 == 0){
        throw "initialized num can not be zero";
    }
    m_kindINT = num1;
    m_kindLONG = num2;
    m_kindFLOAT = num3;
}

int AllKinds::getKindINT() const
{
    return m_kindINT;
}

long AllKinds::getKindLONG() const
{
    return m_kindLONG;
}

float AllKinds::getKindFLOAT() const
{
    return m_kindFLOAT;
}

void AllKinds::setKindINT(const int num)
{
    m_kindINT = num;
}

void AllKinds::setKindLONG(const long num)
{
    m_kindLONG = num;
}

void AllKinds::setKindFLOAT(const float num)
{
    m_kindFLOAT = num;
}

float AllKinds::addINTandFLOAT()
{
    return static_cast<float>(m_kindINT) + m_kindFLOAT;
}

long AllKinds::addINTandLONG()
{
    return static_cast<long>(m_kindINT) + m_kindLONG;
}

float AllKinds::addLONGandFLOAT()
{
    return static_cast<float>(m_kindLONG) + m_kindFLOAT;
}


float AllKinds::addINTandLONGandFLOAT()
{
    return static_cast<float>(m_kindINT) + static_cast<float>(m_kindLONG) + m_kindFLOAT;
}









