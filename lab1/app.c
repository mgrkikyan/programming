// MEDIUM уровень

#include <stdio.h>

int main()
{
    int x;
    FILE *file = fopen("logfile", "a");  // Открытие файла log.txt в режиме "дописывание в конец"
    if (file == NULL) {
        printf("Oshibka!\n");
        return 1;
    }
    while (1) 
        {
        printf("Enter x -> ");
        scanf("%d", &x);
        if (x == 0)
        break;
        printf("Vi vveli: %d\n", x);
        }
printf("Vi vveli 0.");
}