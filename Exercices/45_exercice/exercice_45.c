#include <stdio.h>

int main() {
    // Exercice 45
    int i, not_equal = 0, tab1[10], tab2[10];
    

    // Remplissage des tableaux
    printf("Remplissez le tableau 1 :\n");
    for (i=0;i<10;i++){
        scanf("%d",&tab1[i]);
    }

    printf("\n");

    printf("Remplissez le tableau 2 :\n");
    for (i=0;i<10;i++){
        scanf("%d",&tab2[i]);
    }
    
    // Une fois les tableaux remplis, on les compare
    for (i=0;i<10;i++){
        if (tab1[i] != tab2[i]) {
            not_equal = 1;
        }
    }

    if (not_equal==1){
        printf("Les tableaux ne sont pas égaux.");
    } else {
        printf("Les tableaux sont égaux.");
    }

    return 0;
}
