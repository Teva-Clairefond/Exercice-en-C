#include <stdio.h>

int main() {
    // Exercice 42
    float n1,n2,produit;
    printf("Le nombre n1 est :\n");
    scanf("%f",&n1);
    printf("Le nombre n2 est :\n");
    scanf("%f",&n2);
    produit = n1 * n2;
    if (produit < 0){
        printf("Le produit est négatif");
    } else if (produit > 0){
        printf("Le produit est positif");
    } else {
        printf("Le produit est nul");
    }
    return 0;
}
