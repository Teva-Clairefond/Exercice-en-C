#include <stdio.h>

int main() {
    // Exercice 50
    int nb=0,somme=0;
    printf("Saisissez les nombres :");
    while (nb >= 0) {
        scanf("%d", &nb);
        if (nb >= 0) {
            somme += nb;
        }
    }
    printf("%d",somme);
    return 0;
}
