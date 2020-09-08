#include "Flower.h"

void Flower::setFlowerName(const std::__cxx11::string& name)
{
    m_name = name;
}

std::__cxx11::string Flower::getFlowerName() const
{
    return m_name;
}

void Flower::setFlowerNumberOfPedals(int num)
{
    m_numberOfPedals = num;
}

int Flower::getFlowerNumberOfPedals() const
{
    return m_numberOfPedals;
}


void Flower::setFlowerPrice(float price)
{
    m_price = price;
}

float Flower::getFlowerPrice() const
{
    return m_price;
}





