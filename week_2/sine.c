/*
 *
 *
 * ██╗    ██╗ ██████╗ ██╗████████╗███████╗██╗  ██╗
 * ██║    ██║██╔═══██╗██║╚══██╔══╝██╔════╝██║ ██╔╝
 * ██║ █╗ ██║██║   ██║██║   ██║   █████╗  █████╔╝
 * ██║███╗██║██║   ██║██║   ██║   ██╔══╝  ██╔═██╗
 * ╚███╔███╔╝╚██████╔╝██║   ██║   ███████╗██║  ██╗
 *  ╚══╝╚══╝  ╚═════╝ ╚═╝   ╚═╝   ╚══════╝╚═╝  ╚═╝
 *
 *
 *
 *  ______
 * /\  ___\
 * \ \ \____
 *  \ \_____\
 *   \/_____/
 *
 *
 *
 * This program reads a real number x, and returns the value of the
 * corresponding sine. The number x must belong to the open interval (0, 1).
 *
 *
 */

#include <math.h>
#include <stdio.h>

#define NUMBER_TERMS 15

/*
 * Function that receives a real number x, and returns the value of the
 * corresponding sine. The result for sin(x) is obtained by using the Taylor
 * series expansion of the sine.
 */
double sin_taylor(double x)
{
    unsigned long int denominator = 1;
    unsigned int i;
    const double minus_x_squared = - x * x;
    unsigned int number_factorial = 1;
    double numerator = x;
    double sum = 0.0;

    for (i = 1; i < NUMBER_TERMS; i++) {
        sum += numerator / denominator;
        numerator *= minus_x_squared;
        denominator *= (number_factorial + 1) * (number_factorial + 2);
        number_factorial += 2;
    }
    sum += numerator / denominator;
    return sum;
}

int main()
{
    double x;

    printf("Enter the value of the real number x: ");
    scanf("%lf", &x);
    if ((x <= 0.0) || (x >= 1.0)) {
        printf("The real number x must belong to the open interval (0, 1)\n");
        return -1;
    } else {
        printf("Result obtained by using the C built-in function:\n");
        printf("sin(%lf) = %.20lf\n", x, sin(x));
        printf("Result obtained by using the Taylor series expansion:\n");
        printf("sin(%lf) = %.20lf\n", x, sin_taylor(x));
        printf("The first %d terms of the series were used\n", NUMBER_TERMS);
        return 0;
    }
}
