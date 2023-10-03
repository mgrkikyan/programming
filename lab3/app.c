// Вариант 5


#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main()
{
    double x[7] = {0.0, 1.0, 2.0, 3.0, 7.0, 16.0, 0.0};
    int i;
    double S; double P;
    printf("Massiv x[7]:\n");
    printf("i\tx[i]\n");
    for(i = 1; i < 6; i++) 
        {
            printf("%d\t%f\n", i, x[i]);
        }
    S = 0;
    for(i = 1; i < 6; i++)
        {
            S = S + x[i];
        }
    printf("Summa = %f\n", S); 
    P = 1;
    for(i = 1; i < 6; i++)
        {
            P = P * x[i];
        }
    printf("Proizvedenie = %f\n", P);
}



