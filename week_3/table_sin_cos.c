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
 * This program prints a table of values for sin(x) and cos(x), where x belongs
 * to the closed interval [0, 1].
 *
 *
 */

#include <math.h>
#include <stdio.h>

int main()
{
    unsigned int i, num_divisions;
    double delta_x, x = 0.0;

    printf("\nEnter the number of divisions of the interval: ");
    scanf("%d", &num_divisions);
    if (num_divisions <= 0) {
        printf("\nThe number of divisions must be greater than zero\n\n");
        return -1;
    }
    delta_x = 1.0 / num_divisions;
    printf("\n+--------------+--------------+--------------+\n");
    printf("|      x       |    sin(x)    |    cos(x)    |\n");
    printf("+--------------+--------------+--------------+\n");
    for (i = 0; i < num_divisions; i++) {
        printf("| %.10lf | %.10lf | %.10lf |\n", x, sin(x), cos(x));
        x += delta_x;
    }
    printf("| %.10lf | %.10lf | %.10lf |\n", x, sin(x), cos(x));
    printf("+--------------+--------------+--------------+\n\n");
    return 0;
}
