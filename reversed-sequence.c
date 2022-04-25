/* Kata: https://www.codewars.com/kata/5a00e05cc374cb34d100000d */
/* Not complete */

/* Note: allocate memory yourself */
/* return NULL in case num == 0 */

#include <stdlib.h>

unsigned short *reverse_seq(unsigned short num)
{
    unsigned short arr[num];
    unsigned short nnum = num;
    for (int n = 0; n < num; n++) {
        arr[n] = nnum;
        nnum--;
    }
    return (num != 0) ? arr : NULL;
}
