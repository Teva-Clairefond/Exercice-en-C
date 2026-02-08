#include <stdio.h>

int main() {
    // Exercice 38
    int nb,i,premier = 1;
    printf("Entrez le nombre :\n");
    scanf("%d",&nb);
    for (i=2;i<=nb/2;i++){
        if (nb%i == 0) {
            premier = 0;
        }
    }
    printf("%d",premier);
    return 0;
}
