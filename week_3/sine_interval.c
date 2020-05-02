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
 * This program prints the absolute value of sin(x) over an interval.
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
    printf("\n");
    delta_x = (x_max - x_min) / num_divisions;
    x = x_min;
    for (i = 0; i < num_divisions; i++) {
        printf("abs(sin(%.10lf)) = %.10lf\n", x, fabs(sin(x)));
        x += delta_x;
    }
    printf("abs(sin(%.10lf)) = %.10lf\n\n", x, fabs(sin(x)));
    return 0;
}
