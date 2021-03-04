#include "Chapter6.h"

long double fact (int i)
{
    long double ret = 1;
    while (i > 1) {
        ret *= i--;
    }
    return ret;
}
