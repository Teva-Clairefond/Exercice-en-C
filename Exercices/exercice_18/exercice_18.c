#include <stdio.h>

int main () {
    // Exercice 18
    int somme=0, nb;
    printf("Le nombre est :\n");
    scanf("%d", &nb);
    for (int i=1;i<=nb;i++){
        somme += i;
    }
    printf ("La somme est : %d", somme);
    return 0;
}
