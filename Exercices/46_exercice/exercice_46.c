#include <stdio.h>

int main() {
    // Exercice 46
    int i, tab[5], somme_pairs=0, somme_impairs=0, result;
    printf("Rentrez les valeurs du tableau :\n");

    for (i=0;i<5;i++) {
        scanf("%d",&tab[i]);
    }

    for (i=0;i<5;i++) {
        if (tab[i]%2 == 0) {
            somme_pairs += tab[i];
        } else {
            somme_impairs += tab[i];
        }
    }

    result = somme_pairs - somme_impairs;

    printf("%d",result);


    return 0;
}
