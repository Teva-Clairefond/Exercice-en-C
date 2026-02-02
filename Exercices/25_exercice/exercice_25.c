#include <stdio.h>

int main () {
    int nb,montant;
    float salaire;
    printf("Saisir le nombre d'heures travaillées :\n");
    scanf("%d",&nb);
    printf("Montant horaire\n");
    scanf("%d",&montant);
    salaire = nb * montant;
    printf("Le salaire est de : %.2f",salaire);
    return 0;
}
