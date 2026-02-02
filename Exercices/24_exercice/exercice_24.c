#include <stdio.h>

int main () {
    int nb,annees,semaines,jours;
    printf("Entrez un nombre de jours :\n");
    scanf("%d", &nb);
    annees = nb/365;
    semaines = (nb%365)/7;
    jours = (nb%365)%7;
    printf("Ca fait %d annees, %d semaines, %d jours.",annees,semaines,jours);
    return 0;
}