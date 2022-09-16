/* Kata: https://www.codewars.com/kata/55983863da40caa2c900004e */

#include <string.h>

#define MAX_LONG_CHARS 19

long long next_bigger_number(long long num) {
    int long_arr[MAX_LONG_CHARS];
    memset(long_arr, 0x0, sizeof(long_arr));

    // Iterate each digit. n will be 1 digit less each iteration
    int i = 0;
    for (int n = num; n > 0; n /= 10) {
        long_arr[i++] = n % 10;
        printf("%d ", n % 10);
    }
    
    int ret = 0;
    // TODO: Iterate array and sort items

    return ret;
}
