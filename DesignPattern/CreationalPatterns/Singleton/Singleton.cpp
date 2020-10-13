#include "Singleton.h"

Singleton* Singleton::m_instance = 0;

Singleton * Singleton::Instance()
{
    if(m_instance == 0){
        m_instance = new Singleton;
    }
    return m_instance;
}

