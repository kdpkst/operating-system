#include <stdio.h>

int main(void){
    // C has three mandatory real ﬂoating point types: float, double, and long double
    float f = 0.314f; /* suffix f or F denotes type float */
    double d = 0.314; /* no suffix denotes double */
    long double ld = 0.314l; /* suffix l or L denotes long double */

    // the different parts of a floating point definition are optional
    double x = 1.; /* valid, fractional part is optional, equivalent to 1.0 */
    printf("%f\n", x);
    double y = .1; /* valid, whole-number part is optional, equivalent to 0.1 */
    printf("%f\n", y);

    // they can also defined in scientific notation
    double sd = 1.2e3; /* 1.2 times 10^3, that is 1200 */
    return 0;
}