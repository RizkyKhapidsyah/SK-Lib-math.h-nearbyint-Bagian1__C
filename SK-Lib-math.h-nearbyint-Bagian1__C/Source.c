#include <stdio.h>      /* printf */
#include <fenv.h>       /* fegetround, FE_* */
#include <math.h>       /* nearbyint */
#include <conio.h>

/*
    Source by CPlusPlus
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    printf("rounding using ");
    switch (fegetround()) {
    case FE_DOWNWARD:  
        printf("downward"); 
        break;
    case FE_TONEAREST: 
        printf("to-nearest"); 
        break;
    case FE_TOWARDZERO: 
        printf("toward-zero"); 
        break;
    case FE_UPWARD: 
        printf("upward"); 
        break;
    default: 
        printf("unknown");
    }
    printf(" rounding:\n");

    printf("nearbyint (4.8) = %.1f\n", nearbyint(4.8));
    printf("nearbyint (8.2) = %.1f\n", nearbyint(8.2));
    printf("nearbyint (-9.1) = %.1f\n", nearbyint(-9.1));
    printf("nearbyint (-0.3) = %.1f\n", nearbyint(-0.3));

    _getch();
    return 0;
}