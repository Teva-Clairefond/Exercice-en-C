#include <stdio.h>

int main () {
    float nb;
    printf ("Rentrer le nombre :\n");
    scanf("%f", &nb);
    if (nb < 0){
        nb = -nb;
    }
    printf("La valeur absolue est : %.2f", nb);
    return 0;
}
