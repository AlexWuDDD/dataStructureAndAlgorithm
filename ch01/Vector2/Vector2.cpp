#include "Vector2.h"

Vector2::Vector2(double x, double y) : x(x), y(y)
{
}

Vector2::~Vector2()
{
}


double Vector2::getX() const
{
    return x;
}

double Vector2::getY() const
{
    return y;
}


vector<double> Vector2::operator+(const Vector2& v)
{
    vector<double> ret;
    ret.emplace_back(x + v.getX());
    ret.emplace_back(y + v.getY());
    return ret;
}

vector<double> Vector2::operator*(double n)
{
    vector<double> ret;
    ret.emplace_back(x*n);
    ret.emplace_back(y*n);
    return ret;
}


double Vector2::dot(const Vector2& v)
{
    return x*v.getX() + y*v.getY();
}

vector<double> operator*(double n, const Vector2 &v)
{
    vector<double> ret;
    ret.emplace_back(v.getX()*n);
    ret.emplace_back(v.getY()*n);
    return ret;
}


