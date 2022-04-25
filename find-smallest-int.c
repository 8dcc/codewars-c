#include <stddef.h>

int find_smallest_int(int *vec, size_t len)
{
    int m = *vec;
    for (unsigned long n = 0; n < len; n++) {
        if (vec[n] < m) m = vec[n];
    }
    return m;
}
