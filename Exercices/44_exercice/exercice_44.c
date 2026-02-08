#include <stdio.h>

int main() {
    // Exercice 44
    int nb;
    float taux_1=0.5,taux_2=0.45,taux_3=0.3,price;
    printf("Rentrez le nombre de photocopies à réaliser :\n");
    scanf("%d",&nb);
    if (nb >= 0 && nb <= 10) {
        price = nb*taux_1;
    } else if (nb > 10 && nb <= 30) {
        price = 10*taux_1 + (nb-10)*taux_2;
    } else if (nb > 30) {
        price = 10*taux_1 + 20*taux_2 + (nb-30)*taux_3;
    } else {
        price = -1;
    }
    
    if (price != -1) {
        printf("Le prix à payer est de : %.2f",price);
    } else {
        printf("Nombre invalide");
    }

    return 0;
}
