#include <iostream>
#include "./ch01/exe.h"
#include "./ch02/ch02Sample.h"
#include "./ch02/ch02Exe.h"

int main(int argc, char **argv) 
{
#ifdef CH01
    ch01_exe::run_test();
#endif    
    
#ifdef CH02
    ch02Sample::codeFragmentRun();
    ch02Exe::runExe();
#endif
    std::cout << "Hi, this is the end" << std::endl;
    return 0;
}
