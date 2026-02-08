#include <stdio.h>

int main() {
    // Exercice 39
    int nb,exp,i,result=1;
    printf("Rentrez le nombre :\n");
    scanf("%d",&nb);
    printf("Rentrez l'exposant :\n");
    scanf("%d",&exp);

    for (i=1;i<=exp;i++){
        result = result * nb;
    }
    printf("%d",result);
    return 0;
}
