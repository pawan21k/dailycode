#include<stdio.h>

#define     LOWER   0       /* lower limit of table */
#define     UPPER   300     /* upper limit */
#define     STEP    20      /* step */

// #define     name    replacement text
// the quantities LOWER, UPPER and STEP are symbolic constants, not variable.
// the replacement text can be any sequence of characters, it is not limited to numbers.

int main(){

    int fahrenheit;
    
    printf("\nFahr. \t celsius\n");
    printf("\n");
    
    for (fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit = fahrenheit + STEP)
    {
        printf("%3d \t %6.1f\n", fahrenheit, (5.0/9.0)*(fahrenheit-32));
        // %3d says that integer number (here fahrenheit) is to be printed at least 3 characters wide.
        // %6.1f says that floating-point number is to be printed at least six characters wide, with 1 digit after the decimal point.
    }
    
    return 0;
}
