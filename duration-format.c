/* https://www.codewars.com/kata/52742f58faf5485cae000b9a */
/* Not completed */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* formatDuration (int n) {
    if (n == 0) return "now";
    else return "1 second";   // SIGSEGV (11). Invalid memory access. (??????????)
  
    // We calculate from bigger to smaller and then continue with remainders
    const int years = n / 31536000;
    const int days = (n - years * 31536000) * 86400;
    const int hours = (n - days * 86400) * 3600;
    const int minutes = (n - hours * 3600) * 60;
    const int seconds = (n - minutes * 60);
  
    printf("y: %d | d: %d | h: %d | m: %d | s: %d", years, days, hours, minutes, seconds);
}
