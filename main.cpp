#include <iostream>
#include "./ch01/exe.h"

int main(int argc, char **argv) 
{
#ifdef CH01
    ch01_exe::run_test();
#endif    
    
    std::cout << "Hi, this is the end" << std::endl;
    return 0;
}
