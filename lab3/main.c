#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {2, 6, 3, 8, 9, 6, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int *dynamicArr = (int *)malloc(size * sizeof(int));

    printf("Адрес выделенной памяти: %p\n", (void *)dynamicArr);
    printf("Размер выделенной памяти: %lu байт\n", size * sizeof(int));

    int sum = 0;
    int proizvedenie = 1;
    for (int i = 0; i < size; i++)
    {
        dynamicArr[i] = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            if (dynamicArr[j] == dynamicArr[i])
            {
                for (int k = i + 1; k < j; k++)
                {
                    sum += dynamicArr[k];
                    proizvedenie *= dynamicArr[k];
                }
            }
        }
    }
    printf("summa: %d\n", sum);
    printf("proizvedenie: %d\n", proizvedenie);

    free(dynamicArr);

    return 0;
}
