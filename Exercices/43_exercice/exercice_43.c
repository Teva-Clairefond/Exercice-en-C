#include <stdio.h>

int main() {
    // Exercice 43
    float score;
    printf("Entrez le score :\n");
    scanf("%f",&score);
    if (score <= 10 && score >= 0) {
        printf("NOT GOOD");
    } else if (score <= 20) {
        printf("GOOD");
    } else {
        printf("Invalid");
    }
    return 0;
}
