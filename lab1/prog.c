#include <stdio.h>

int main() {
    int x;
    FILE *file = fopen("logfile", "a"); 
    if (file == NULL) {
        printf("Error!\n");
        return 1;
    }
    
    while (1) {
        printf("Enter x -> ");
        scanf("%d", &x);
        if (x == 0)
            break;
        printf("You entered: %d\n", x);
        fprintf(file, "Your input: %d\n", x);  
        fprintf(file, "Your output: %d\n", x); 
    }
    
    printf("Exiting the loop.\n"); 
    fclose(file); 
    return 0;
}