// ВАРИАНТ - 5

#include <stdio.h>

int main() 
{
    int arr[] = {2, 6, 3, 8, 9, 6, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int proizvedenie = 1;
    for (int i = 0; i < size; i++) 
    {
        for(int j = i + 1; j < size; j++) 
        {   
            if (arr[j] == arr[i]) 
            {
                for (int k = i + 1; k < j; k++) 
                {
                    sum += arr[k];
                    proizvedenie *= arr[k];
                }
            }
        }
    }
    printf("summa: %d\n", sum);
    printf("proizvedenie: %d\n", proizvedenie);
    return 0;
}
