#include "Vector2.h"
#include <iostream>
using std::cout;
using std::endl;


void printVector(const vector<double> &vect)
{
    if(vect.size() == 2){
        cout << "( " <<vect[0] << " , " << vect[1] << " )" << endl;
    }
}


int main()
{
    Vector2 v1(1.1, 2.2);
    Vector2 v2(3.3, 4.4);
    
    printVector(v1 + v2);
    printVector(v1 * 2);
    printVector(2 * v1);
    cout << v1.dot(v2) << endl;
}
