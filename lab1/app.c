#include <stdio.h>

int main()
{
    int x;
    while (1) 
        {
        printf("Enter x -> ");
        scanf("%d", &x);
        if (x == 0)
        break;
        printf("You entered: %d\n", x);
        }
printf("Exiting the loop.");
}