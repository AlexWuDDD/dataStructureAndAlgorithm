#ifndef SOMETHINGNOTICED_H
#define SOMETHINGNOTICED_H

class Singleton
{
public:
    static void Register(const char* name, Singleton*);
    static Singleton* Instance();
protected:
    static Singleton* Lookup(const char* name);
private:
    static Singleton* m_instance;
    //each NameSingletonPair maps a name to a singleton
    static List<NameSingletonPair>* m_registry;
};

Singleton * Singleton::Instance()
{
    if(m_instance == 0){
        const char* singletonName = getenv("SINGLETON");
        
        m_instance = Lookup(singletonName);
    }
    return m_instance;
}

//subclass MySingleton
/*
 MySingleton::MySingleton()
 {
    Singleton::Register("MySingleton", this);
 }
 
 */

 //define a static instance of MySingleton
 //static MySingleton theSingleton;

#endif
