#include "exe.h"
#include <iostream>
#include <limits>
using std::cout;
using std::endl;
using std::string;

void ch01_exe::run_test()
{
    R_1_1();
    
    int test_array[10] = {1,2,3,4,4,-12, 23, -232, 121, 33};
    R_1_2(test_array, 10);
    
    R_1_3();
    R_1_4();
    R_1_5();
    R_1_6();
    R_1_7(10);
    R_1_8(55, 10);
    R_1_8(64, 2);
    
}


void ch01_exe::printFormat()
{
    cout << string(30, '*') << endl;
}


void ch01_exe::R_1_1()
{
    printFormat();
    cout << "R_1_1" << endl;
    cout << "Due that Remember that a variable name may consist of any combination of letters, digits, or the underscore (_) character, but the first character cannot be a digit." << endl;
    cout << "Not valid C++ variable name:" << endl;
    cout << "None" << endl;
    printFormat();
}

void ch01_exe::R_1_2(int array[], int len)
{
    printFormat();
    cout << "R_1_2" << endl;
    int minNum = std::numeric_limits<int>::max();
    int maxNum = std::numeric_limits<int>::min();
    cout << "we have following numbers:" << endl;
    
    for(int i = 0; i < len; ++i){
        cout << array[i] << " ";
        minNum = std::min(minNum, array[i]);
        maxNum = std::max(maxNum, array[i]);
    }
    cout << endl;
    cout << "max number is " << maxNum << endl;
    cout << "min number is " << minNum << endl;
    printFormat();
}

void ch01_exe::R_1_3()
{
    printFormat();
    cout << "R_1_3" << endl;
    cout <<"struct Pair{\n" << "    int first;\n" << "    double second;\n" << "};"<< endl;
    printFormat();
}

void ch01_exe::R_1_4()
{
    printFormat();
    cout << "R_1_4" << endl;
    string s = "abc";
    string t = "cde";
    s += s + t[1] + s;
    cout << "what is expected is : abcabcdabc" << endl;
    cout << "the result is " << s << endl;
    cout << "they are " << (s == "abcabcdabc"?"same":"different") << endl;
    printFormat();
}

void ch01_exe::R_1_5()
{
    printFormat();
    cout << "R_1_5" << endl;
    
    int w = 10;
    int y = 12;
    int z = 13;
    
    
    cout << (y + 2 * z ++ < 3 - w / 5) << endl;
    cout << ((y + 2 * (z++)) < (3 - w / 5)) << endl;
    cout << z << endl;
    
    printFormat();
}

void ch01_exe::R_1_6()
{
    printFormat();
    cout << "R_1_6" << endl;
    double *dp = new double[10];
    //can not use sizeof(dp) to get the array size
    for(int i = 0; i < 10; ++i){
        dp[i] = 0.0;
    }
    delete [] dp;
    printFormat();
}

void ch01_exe::R_1_7(int n)
{
    printFormat();
    cout << "R_1_7" << endl;
    cout << "sum of the integers smaller than " << n << " from 1 is: ";
    cout << (1+n)*n/2 << endl;
    printFormat();
}

void ch01_exe::R_1_8(int n, int m)
{
    printFormat();
    cout << "R_1_8" << endl;
    cout << "n is "<< n << "; m is " << m << endl;
    cout << (n%m == 0 ? "true" : "false") << endl;
    printFormat();
}









