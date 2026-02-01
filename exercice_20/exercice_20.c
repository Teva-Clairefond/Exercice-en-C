#include <stdio.h>

int main () {
    // Exercice 20
    int nb;
    printf("La table de mutltiplication du nombre :\n");
    scanf("%d", &nb);
    for (int i=1;i<=10;i++){
        int value = nb*i;
        printf("%d x %d = %d\n", nb, i, value);
    }
    return 0;
}
