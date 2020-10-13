#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
public:
    static Singleton* Instance();
protected:
    Singleton();
private:
    static Singleton* m_instance;
};



#endif
