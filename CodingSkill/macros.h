#ifndef MACROS_H
#define MACROS_H

#include <cstdio>

#define CHECK(LINE, EXPECTED)   \
    {int rc = LINE;          \
     if(rc != EXPECTED)      \
        ut_abort(__FILE__, __LINE__, #LINE, rc, EXPECTED);}                                                        

void ut_abort(const char *file, int ln, const char* line, int rc, int exp)
{
    fprintf(stderr, "%s line %d - '%s': expected %d, got %d\n", file, ln, line, exp, rc);
}        
        
int test1()
{
    return 1;
}




#endif
