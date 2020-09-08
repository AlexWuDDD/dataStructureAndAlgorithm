#ifndef ALLKINDS_H
#define ALLKINDS_H

class AllKinds
{
public:
    AllKinds(int num1, long num2, float num3);
    
    int getKindINT() const;
    long getKindLONG() const;
    float getKindFLOAT() const;
    
    void setKindINT(const int num);
    void setKindLONG(const long num);
    void setKindFLOAT(const float num);
    
    long addINTandLONG();
    float addINTandFLOAT();
    float addLONGandFLOAT();
    float addINTandLONGandFLOAT();

private:    
    int m_kindINT;
    long m_kindLONG;
    float m_kindFLOAT;
};




#endif
