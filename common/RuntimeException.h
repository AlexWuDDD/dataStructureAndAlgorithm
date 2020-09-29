#ifndef RUNTIMEEXCEPTION
#define RUNTIMEEXCEPTION

#include <string>
using std::string;


//generic run-time exceptopm
class RuntimeException
{
private:
    string errMsg;
public:
    RuntimeException(const string& err){errMsg = err;}
    string getMessage() const {return errMsg;}
    
};




#endif
