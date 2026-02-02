#include <stdio.h>

int main () {
    int nb,i,somme=0;
    printf("Le nombre choisi est :\n");
    scanf("%d",&nb);
    for (i=1;i<=nb;i++){
        if (i%2==1){
            somme +=i;
        }
    }
    printf("La somme est : %d",somme);
    return 0;
}
