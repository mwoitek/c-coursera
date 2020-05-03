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
 * This program prints the absolute value of sin(x) over an interval. To make
 * things more interesting, I decided to completely rewrite the code I was
 * supposed to correct. My version of the program allows the user to specify
 * the interval and its number of divisions. To obtain the results that the
 * original code should generate, your input must be as follows:
 * x_min = 0
 * x_max = 2.9
 * num_divisions = 29
 *
 *
 */

#include <math.h>
#include <stdio.h>

int main()
{
    unsigned int i, num_divisions;
    double delta_x, x, x_max, x_min;

    /* Reads the values related to the interval. */
    printf("\nEnter x_min (minimum value of x): ");
    scanf("%lf", &x_min);
    printf("Enter x_max (maximum value of x): ");
    scanf("%lf", &x_max);
    if (x_max < x_min) {
        printf("\nx_min and x_max must be chosen so that x_max >= x_min\n\n");
        return -1;
    }
    printf("Enter the number of divisions of the interval: ");
    scanf("%d", &num_divisions);
    if (num_divisions <= 0) {
        printf("\nThe number of divisions must be greater than zero\n\n");
        return -1;
    }

    /* Prints the values of abs(sin(x)). */
    delta_x = (x_max - x_min) / num_divisions;
    x = x_min;
    printf("\n...............................\n");
    printf(":      x       : abs(sin(x))  :\n");
    printf(":..............:..............:\n");
    for (i = 0; i < num_divisions; i++) {
        printf(": %.10lf : %.10lf :\n", x, fabs(sin(x)));
        x += delta_x;
    }
    printf(": %.10lf : %.10lf :\n", x, fabs(sin(x)));
    printf(":..............:..............:\n\n");
    return 0;
}
