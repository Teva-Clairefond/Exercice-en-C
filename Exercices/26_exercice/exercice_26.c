#include <stdio.h>

int main () {
    int nb;
    printf("Vous choisissez le nombre :\n");
    scanf("%d",&nb);
    for (int i = 0;i<=nb;i++){
        if (i%2 == 0) {
            printf("%d\n",i);
        }
    }
    return 0;
}
