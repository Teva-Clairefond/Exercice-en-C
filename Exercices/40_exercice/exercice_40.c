#include <stdio.h>

int main() {
    // Exercice 40
    int age;
    printf("Renseignez votre age :");
    scanf("%d",&age);

    if (age < 6) {
        printf("Vous êtes un bébé.");
    } else if (age <= 7) {
        printf("Vous êtes un gamin.");
    } else if (age <= 9) {
        printf("Vous êtes un pupille.");
    } else if (age <= 11) {
        printf("Vous êtes un jeune.");
    } else {
        printf("Vous êtes un cadet.");
    }
    return 0;
}
