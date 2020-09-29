#ifndef MATHEXCEPTION_H
#define MATHEXCEPTION_H

#include <string>
using std::string;

class MathException
{
public:
    MathException(const string& err)
        : errMsg(err){}
    string getError(){return errMsg;}
private:
    string errMsg;
};




#endif
