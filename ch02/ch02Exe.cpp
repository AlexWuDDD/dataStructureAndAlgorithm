#include "ch02Exe.h"
#include "FibonacciProgressionSub.h"
#include "ArithProgessionSub.h"
#include <climits>

void ch02Exe::runExe()
{
    R_2_1();
    R_2_2();
    R_2_3();
    R_2_7();
    R_2_8();
    R_2_9();
}

void ch02Exe::R_2_1()
{
    cout << "R-2.1: if we have Z, when creating Z, we have to inherit from A to Y, cost is so high" << endl;
}

void ch02Exe::R_2_2()
{
    cout << "R-2.2: code reusability is low" << endl;
}

void ch02Exe::R_2_3()
{
    cout << "R-2.3: 1. Ventilator controller, 2. heart monitor, 3. X-ray machine" << endl;
}

void ch02Exe::R_2_7()
{
    Child *ch1 = new Child;
    delete ch1;
}


void ch02Exe::R_2_8()
{
    FibonacciProgressionSub *fib = new FibonacciProgressionSub(3, 4);
    //fib->printProgression(7);
    cout << fib->getValueOfNth(7) << endl;
    
    delete fib;
}

void ch02Exe::R_2_9()
{
    ArithProgressionSub *ari = new ArithProgressionSub(128);
    int cnt = 0;
    cout << "sizeof long: " << sizeof(long)*8 << " bits" << endl;
    cout << LONG_MAX << endl;
    while(true){
        unsigned long cur = (unsigned long)ari->getNextValue();
        cout << cur << " ; " << LONG_MAX << endl;
        if(cur >= LONG_MAX){
            break;
        }
        ++cnt;
        //cout << cnt << endl;
    }
    cout << cnt << endl;
    delete ari;
}







