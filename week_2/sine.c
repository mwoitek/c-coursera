/*
 *
 * sine.c
 *
 * Author: Marcio Woitek --- E-mail: woitek@usp.br
 *
 * This program reads a real number x
 * from the standard input, and
 * returns the value of the corresponding sine.
 * The number x must belong to the open interval (0, 1).
 *
 */

#include <stdio.h>
#include <math.h>

int main()
  {
    double x;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    if ((x <= 0.0) || (x >= 1.0))
      {
        printf("x must belong to the interval (0, 1)\n");
        return -1;
      }
    else
      {
        printf("sin(%lf) = %lf\n", x, sin(x));
        return 0;
      }
  }
