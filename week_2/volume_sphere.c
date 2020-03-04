/*
 *
 * volume_sphere.c
 *
 * Author: Marcio Woitek --- E-mail: woitek@usp.br
 *
 * This program reads the radius of a sphere
 * from the standard input, and
 * returns the corresponding volume.
 *
 */

#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main()
  {
    double radius;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    printf("The volume is %lf\n", (4.0 / 3.0) * PI * pow(radius, 3.0));
    return 0;
  }
