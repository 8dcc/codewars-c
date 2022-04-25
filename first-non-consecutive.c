/* Kata: https://www.codewars.com/kata/58f8a3a27a5c28d92e000144 */
/* Not complete */

#include <stdbool.h>

bool firstNonConsecutive (const int arr[], const int length, int *first) {
    const int step = -arr[0] + arr[1];  // TODO
    for (int n = 0; n < length; n++) {
        if (arr[n] != arr[n-1] + step) {
            *first = arr[n];
            return true;
        }
    }
    return false;
}
