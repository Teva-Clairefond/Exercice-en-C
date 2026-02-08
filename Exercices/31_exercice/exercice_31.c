#include <stdio.h>

int main() {
    // Exercice 31
    int km;
    float litre,conso;
    printf("Entrez la distance parcourue en km :\n");
    scanf("%d",&km);
    printf("Entrez la quantité consommée en litre :\n");
    scanf("%f",&litre);
    conso = litre/km;
    printf("La consommation est de %.2f litre/km.",conso);
    return 0;
}
