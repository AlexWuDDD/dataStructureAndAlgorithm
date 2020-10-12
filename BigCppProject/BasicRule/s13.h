#ifndef INCLUDE_S13
#define INCLUDE_S13

#ifndef INCLUDE_W1
#include "w1.h"
#endif

#ifndef INCLUDE_W2
#include "w2.h"
#endif

//......

#ifndef INCLUDE_MATH
#include <math.h>
#define INCLUDE_MATH //extra_line
#endif

class S13
{
    W1 d_w1a;
    //...
    Wn d_wn;
};

#endif
