#ifndef EXE_H
#define EXE_H

#include <vector>
using std::vector;

class ch01_exe
{
public:    
    static void run_test();
    
private:
    static void printFormat();
    static void R_1_1();
    static void R_1_2(int array[], int len);
    static void R_1_3();
    static void R_1_4();
    static void R_1_5();
    static void R_1_6();
    static void R_1_7(int n);
    static void R_1_8(int n, int m);
    static void R_1_9_printArray(int **array, int m, int n);
    
    static void R_1_10();
    static void f(int x);
    static void g(int &x);
    
    static bool R_1_18_isMultiple(long m, long n);
    static bool R_1_19_isTwoPower(int i);
    static long R_1_20(int i);
    static long R_1_21(int i);
    static int R_1_22(double x);
    
    static void C_1_1(int *array, int len);
    static void C_1_2(int *array, int len);
    static void C_1_3(const vector<int> &vct);
    static void C_1_4(const vector<int> &vct);
    
    static void C_1_5(int *array, int len);
    static void C_1_6();
    static void C_1_7();
    
    static void C_1_8();
    static vector<double> vectProd(const vector<double> &v1, const vector<double> &v2);
    
    static long C_1_10(int i);
    
    static long GCD(long m, long n);
};




#endif
