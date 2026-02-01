#include <stdio.h>

int main () {
    int i=1,somme=0,nb;
    printf("La valeur du nombre N est :\n");
    scanf("%d", &nb);
    while (i<nb+1) {
        somme += i;
        i++;
    }
    printf("La somme est égale à : %d", somme);
    return 0;
}
