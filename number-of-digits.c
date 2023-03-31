/* Kata: https://www.codewars.com/kata/58fa273ca6d84c158e000052 */

#include <stdint.h>

int digits(uint64_t n) {
    if (!n)
        return 1;

    int i;
    for (i = 0; n > 0; i++, n /= 10)
        ;
    return i;
}

