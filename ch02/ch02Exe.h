#ifndef CH02EXE_H
#define CH02EXE_H
#include <iostream>
using std::cout;
using std::endl;


class Parent
{
public:
    Parent()
    {
        cout << "create Parent" << endl;
    }
    
    ~Parent()
    {
        cout << "distory Parent" << endl;
    }
};

class Child : public Parent
{
public:
    Child()
    {
        cout << "create Child" << endl;
    }
    
    ~Child()
    {
        cout << "distory Child" << endl;
    }
};

class ch02Exe
{
public:
    static void runExe();
private:
    static void R_2_1();
    static void R_2_2();
    static void R_2_3();
    
    static void R_2_7();
    static void R_2_8();
    static void R_2_9();
};





#endif
