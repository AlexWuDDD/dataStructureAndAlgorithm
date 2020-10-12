#include <assert.h>
#include <iostream>


int main()
{
    assert(0);
    std::cout << "assert test with NDEBUG, can ignore the assert" << std::endl;
    return 0;
}
