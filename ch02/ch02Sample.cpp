#include "ch02Sample.h"

#include "ArithProgression.h"
#include "GeomProgression.h"
#include "FibonacciProgression.h"

#include "OtherExceptions.h"

#include <iostream>
using std::cout;
using std::endl;

void ch02Sample::codeFragmentRun()
{
    codeFragment_2_1();
    throwTest();
}


void ch02Sample::codeFragment_2_1()
{
    Progression* prog;
    cout << "Arithmetic progression with default increment: \n";
    prog = new ArithProgression();
    prog->printProgression(10);
    cout << "Arithmetic progression with increment 5: \n";
    prog = new ArithProgression(5);
    prog->printProgression(10);
    
    cout << "Geometric progression with default increment: \n";
    prog = new GeomProgression();
    prog->printProgression(10);
    cout << "Geometric progression with increment 5: \n";
    prog = new GeomProgression(3);
    prog->printProgression(10);
    
    cout << "Fibonacci progression with default start values: \n";
    prog = new FibonacciProgression();
    prog->printProgression(10);
    cout << "Fibonacci progression with start values 4 and 6: \n";
    prog = new FibonacciProgression(4, 6);
    prog->printProgression(10);
    
    if(prog != nullptr){
        delete prog;
    }
}

void ch02Sample::throwTest()
{
    int divisor = 0;
    try{
        if(divisor == 0){
            throw ZeroDivide("Divide by zero in Module X");
        }
    }
    catch(ZeroDivide& zde){
        cout << zde.getError() << endl;
    }
    catch(MathException& me){
        cout << me.getError() << endl;
    }
}

