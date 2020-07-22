#include "../inc/libmx.h"

double mx_pow(double n, unsigned int pow) {
    double result = n;
    if (pow == 0 || n == 0)
        return 1;
    else
        for (unsigned int i = 1; i < pow; i++) result *= n;
    return result;
}
