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
 * This program reads the radius of a sphere, and returns the corresponding
 * volume.
 *
 *
 */

#include <math.h>
#include <stdio.h>

#define PI 3.1415926535

int main()
{
    double radius, volume;

    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);
    volume = (4.0 / 3.0) * PI * pow(radius, 3.0);
    printf("The volume of the sphere of radius %lf is %.10lf\n", radius, volume);
    return 0;
}
