#include <stdio.h>

int main() {
    // Exercice 41
    int ht, ttc;
    float tva = 0.2, remise=0.25;
    printf("Entrez le montant hors taxes :\n");
    scanf("%d",&ht);
    if (ht >= 500) {
        ttc = (1+tva-remise) * ht;
    } else {
        ttc = (1+tva)*ht;
    }
    printf("La valeur TTC est : %d", ttc);
    return 0;
}
