#include <stdio.h>
#include <math.h>

void main ()
{
    double x, y;
    printf("x|y  \n");
    x=0;
    while(x<=1.5)
    {
        y = pow (2,x) - 2 + pow (x,2);
        printf ("%f %f\n", x, y);
        x = x + 1;
    } 
}

void main1 ()
{
    double x, y;
    printf ("x|y \n");
    x!=1.5;
    while (x<=3)
    {
        y=(pow(x,0.5))*exp(-pow(x,2));
        printf ("%f %f\n", x, y);
        x = x + 1;
    }
}