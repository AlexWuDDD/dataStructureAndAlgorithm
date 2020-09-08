#ifndef FLOWER_H
#define FLOWER_H
#include <string>
using std::string;


class Flower
{
public:
    Flower(string &name, int numberOfPedals, float price):
        m_name(name),
        m_numberOfPedals(numberOfPedals),
        m_price(price)
        {};
    
    void setFlowerName(const string& name);
    string getFlowerName() const;
    
    void setFlowerNumberOfPedals(int num);
    int getFlowerNumberOfPedals() const;
    
    void setFlowerPrice(float price);
    float getFlowerPrice() const;

private:
    string m_name;
    int m_numberOfPedals;
    float m_price;
};





#endif
