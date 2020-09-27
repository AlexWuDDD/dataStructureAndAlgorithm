#ifndef VECTOR2_H
#define VECTOR2_H

#include <vector>
using std::vector;

class Vector2
{

public:
    Vector2(double x, double y);
    ~Vector2();
    
    double getX() const;
    double getY() const;
    
    vector<double> operator+(const Vector2& v);
    vector<double> operator*(double n);
    double dot(const Vector2 & v);
    
private:
    double x;
    double y;
};

vector<double> operator*(double n, const Vector2 &v);








#endif
