#include <stdio.h>

int main() {
    // Exercice 48
    int month;
    printf("Rentrez le numéro du mois :");
    scanf("%d",&month);

    switch (month) {
        case 1:
            printf("Janvier");
            break;
        case 2:
            printf("Février");
            break;
        case 3:
            printf("Mars");
            break;
        case 4:
            printf("Avril");
            break;
        case 5:
            printf("Mai");
            break;
        case 6:
            printf("Juin");
            break;
        case 7:
            printf("Juillet");
            break;
        case 8:
            printf("Août");
            break;
        case 9:
            printf("Septembre");
            break;
        case 10:
            printf("Octobre");
            break;
        case 11:
            printf("Novembre");
            break;
        case 12:
            printf("Décembre");
            break;
        default:
            printf("Mois invalide");
            break;
    }
    
    
    return 0;
}
