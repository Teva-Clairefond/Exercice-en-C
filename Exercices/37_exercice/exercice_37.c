#include <stdio.h>

int main() {
    // Exercice 37
    int nb, i, j;
    printf("Choisissez votre nombre :\n");
    scanf("%d",&nb);
    for (i=0;i<nb;i++){
        for (j=1;j<=nb+i;j++){
            if (j<nb-i){
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
