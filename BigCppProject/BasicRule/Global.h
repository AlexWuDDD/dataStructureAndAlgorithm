#ifndef GLOBAL_H
#define GLOBAL_H

class Global
{
private:
    static int s_size;
    static double s_scale;
    static const char *s_system;
    
private:
    //NOT IMPLEMENTED
    Global(); // prevent indavertent instantiation
    
public:
    // MANIPULATIONS
    static void setSize(int size){s_size = size;}
    static void setScale(double scale){s_scale = scale;}
    static void setSystem(const char* system){s_system = system;}
    
    //ACCESSORS
    static int getSize(){return s_size;}
    static double getScale(){return s_scale;}
    static const char* getSystem(){return s_system;}
};




#endif
