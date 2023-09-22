# programming
lab №1

# Отчет 
## Задание
Сложность:
  Rare
    
    1. Разберите код программы из примера.
    2. Составьте блок-схему алгоритма для своего варианта.
    3. Напишите программу, решающую задачу по своему варианту.
    4. Оформите отчёт в README.md. Отчёт должен содержать:
          4.1 Задание
          4.2 Описание проделанной работы
          4.3 Скриншоты результатов
          4.4 Блок-схему
          4.5 Ссылки на используемые материалы

## Этапы работы
 ### 2. Составьте блок-схему алгоритма для своего варианта

![Image text](https://github.com/mgrkikyan/programming/blob/main/lab1/блок-схема.png)

### 3. Напишите программу, решающую задачу по своему варианту
#### Вариант - 5
```
#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,x;
    printf("Enter a -> ");
    scanf("%d", &a);
    printf("Enter b -> ");
    scanf("%d", &b);
    printf("Enter x -> ");
    scanf("%d", &x);

    if ((a+b)<x)
    {
        if (x==0) 
            printf ("V znamenatele 0\n");
        else 
            printf ("%.3f\n", (float) (a+b)/x);
    }

    if ((a+b)>x)
    {
        if ((a+b)==0) 
            printf ("V znamenatele 0\n");
        else 
            printf ("%.3f\n", (float) x/(a+b));
    }

    if ((a+b)==x)
    {
        if (x==0)
            printf ("V znamenatele 0\n");
        else 
            printf ("%.3f\n", (float) b/x);
    }
    
    return 0;
}
```


## Список использованных источников:
1.https://cpp.com.ru/shildt_spr_po_c/index.html#03
