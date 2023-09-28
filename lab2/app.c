// Вариант 5


#include <stdio.h>
#include <math.h>

int main()
{
    double x = 0.0, y;
    double eps;
    double h;
    scanf("%lf", &h);
    eps = h / 2.0;
    printf("x\t\ty\n");
    while(x >= 0.0 && x <= 1.5)
    {
        y = pow(2.0, x) - 2.0 + pow(x, 2);
        printf("%f\t%f\n", x, y);
        x = x + h;
    } 
    
    while(x <= 3.0 + eps)
    {
        y = sqrt(x) * exp(-pow(x, 2));
        printf("%f\t%f\n", x, y);
        x = x + h;
    }
    return 0;
}