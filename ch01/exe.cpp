#include "exe.h"
#include <iostream>
#include <limits>
#include <stack>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stack;


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

    
    int rows = 3;
    int columns = 4;
    
    int **array = new int*[rows];
    for(int i = 0; i < rows ; ++i){
        array[i] = new int[columns];
        for(int j = 0; j < columns ; ++j){
            array[i][j] = i + j;
        }
    }
    
    R_1_9_printArray(array, rows, columns);
    
    for(int i = 0; i < rows; ++i){
        delete [] array[i];
    }
    delete [] array;
    
    R_1_10();
    cout << "last three test" << endl;
    cout << R_1_20(10) << endl;
    cout << R_1_21(10) << endl;
    cout << R_1_21(9) << endl;
    cout << R_1_22(9.9) << endl;
    
    cout << "Creativity" << endl;
    int array2[5] = {1,2,3,4,5};
    int array3[6] = {1,2,3,4,5,6};
    C_1_1(array2, sizeof(array2)/sizeof(int));
    C_1_1(array3, sizeof(array3)/sizeof(int));
    
    C_1_2(array2, sizeof(array2)/sizeof(int));
    
    std::vector<int> vct1 = {1,2,3,4,5};
    std::vector<int> vct2 = {2,2,3,3,5};
    C_1_3(vct1);
    C_1_3(vct2);
    
    C_1_4(vct1);
    
    int array4[52] = {0};
    for(int i = 0; i < 52; ++i){
        array4[i] = i+1;
    }
    for(int i = 0; i < 10; ++i){
        C_1_5(array4, sizeof(array4)/sizeof(int));
    }
    
    C_1_6();
    C_1_7();
    C_1_8();
    
    printFormat();
    cout << "C_1_10" << endl;
    cout << C_1_10(5) << endl;
    cout << C_1_10(6) << endl;
    cout << C_1_10(7) << endl;
    printFormat();
    
    printFormat();
    if(GCD(80844, 25320) == 12){cout << "test passed" << endl;}
    if(GCD(25320, 80844) == 12){cout << "test passed" << endl;}
    printFormat();
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

void ch01_exe::R_1_9_printArray(int **array, int m, int n)
{
    printFormat();
    cout << "R_1_9" << endl;
    for(int i = 0 ; i < m; ++i){
        for(int j = 0; j < n ; ++j){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    printFormat();
    
}

void ch01_exe::R_1_10()
{
    printFormat();
    cout << "R_1_10" << endl;
    int x = 10;
    f(x);
    cout << "after f, x is "<< x << endl;
    g(x);
    cout << "after g, x is "<< x << endl;
    printFormat();
}

void ch01_exe::f(int x)
{
    cout << "in f: "<< ++x << endl;
}

void ch01_exe::g(int &x)
{
    cout << "in g: "<< ++x << endl;
}


bool ch01_exe::R_1_18_isMultiple(long m, long n)
{
    return n % m == 0;
}

bool ch01_exe::R_1_19_isTwoPower(int i)
{
    return ( i & (i-1)) == 0;
}


long ch01_exe::R_1_20(int i)
{
    return (1 + i-1)*(i-1)/2;
}


long ch01_exe::R_1_21(int i)
{
    int n = 0;
    if(i%2 == 0){
        n = i/2;
        --i;
    }
    else{
        n = (i-1)/2;
        i -= 2;
        
    }
    
    return (1+i)*n/2;
}


int ch01_exe::R_1_22(double x)
{
    if(x <= 0){
        return -1;
    }
    int cnt = 0;
    while(x > 2){
        cout << x << endl;
        x /= 2;
        ++cnt;
    }
    
    return cnt;
}


void ch01_exe::C_1_1(int* array, int len)
{
    printFormat();
    cout << "C_1_1" << endl;
    for(int i = 0; i < len/2; ++i){
        int tmp = array[i];
        array[i] = array[len-i-1];
        array[len-i-1] = tmp;
    }
    
    for(int i = 0; i < len; ++i){
    
        cout << array[i] << " ";
    }
    cout << endl;
    printFormat();
}


void ch01_exe::C_1_2(int* array, int len)
{
    printFormat();
    cout << "C_1_2" << endl;
    for(int i = 0; i < len; ++i){
        if(array[i] % 2 == 0){
            cout << "there is a pair of numbers in the array whose product is even." << endl;
            break;
        }
    }
    printFormat();
}

void ch01_exe::C_1_3(const std::vector<int>& vct)
{
    int size = vct.size();
    for(int i = 0; i < size-1; ++i){
        for(int j = i+1; j < size; ++j){
            if(vct[i] == vct[j]){
                cout << "there are duplicated item" << endl;
                return;
            }
        }
    }
    cout << "items in vector are distinct" << endl;
}

void ch01_exe::C_1_4(const std::vector<int>& vct)
{
    cout << "odds: ";
    for(const auto& item : vct){
        if(item % 2 == 1){
            cout << item <<  " ";
        }
    }
    cout << endl;
}

void ch01_exe::C_1_5(int* array, int len)
{
    printFormat();
    cout << "C_1_5" << endl;
    for(int i = 0; i < len; ++i){
        int swapIndex1 = rand()%len;
        int swapIndex2 = rand()%len;
        
        int tmp = array[swapIndex1];
        array[swapIndex1] = array[swapIndex2];
        array[swapIndex2] = tmp;
    }
    
    for(int i = 0; i < len; ++i){
        cout << array[i] << " ";
    }
    cout << endl;
    
    printFormat();
}


void ch01_exe::C_1_6()
{
    printFormat();
    char array[] = {'a','b','c','d','e','f'};
    int size = sizeof(array)/sizeof(char);
    for(int i = 0; i < size; ++i){
        string a;
        a.push_back(array[i]);
        for(int j = 0; j < size; ++j){
            if(j != i){
                a.push_back(array[j]);
                for(int k = 0; k < size; ++k){
                    if(k != i && k != j){
                        a.push_back(array[k]);
                        for(int l = 0; l < size; ++l){
                            if(l != i && l != j && l != k){
                                a.push_back(array[l]);
                                for(int m = 0; m < size; ++m){
                                    if(m != i && m != j && m != k && m != l){
                                        a.push_back(array[m]);
                                        for(int n = 0; n < size; ++n){
                                            if(n != i && n != j && n != k && n != l && n != m){
                                                a.push_back(array[n]);
                                                cout << a << endl;
                                                a.pop_back();
                                            }
                                        }
                                        a.pop_back();
                                    }
                                }
                                a.pop_back();
                            }
                        }
                        a.pop_back();
                    }
                }
                a.pop_back();
            }
        }
    }
    
    
    printFormat();
}

void ch01_exe::C_1_7()
{
    std::stack<string> stk;
    cout << "Please input lines: " << endl;
    string str;
    /*CTRL + D 结束*/
    while(cin >> str){
        stk.push(str);
        str.clear();
    }
    while(!stk.empty()){
        cout << stk.top() << endl;
        stk.pop();
    }
}

void ch01_exe::C_1_8()
{
    printFormat();
    vector<double> a = {1.1, 2.2, 3.3};
    vector<double> b = {4.4, 5.5, 6.6};
    
    vector<double> ret = vectProd(a, b);
    for(const auto &item : ret){
        cout << item << " ";
    }
    cout << endl;
    printFormat();
}


vector<double> ch01_exe::vectProd(const vector<double>& v1, const vector<double>& v2)
{
    vector<double> ret;
    if(v1.size() == v2.size()){
        for(int i = 0; i < v1.size(); ++i){
            ret.emplace_back(v1[i] * v2[i]);
        }
    }
    return ret;
}

long ch01_exe::C_1_10(int i)
{
    return 2 << i;
}

long ch01_exe::GCD(long m, long n)
{
    return n > 0? GCD(n, m%n) : m;
}






