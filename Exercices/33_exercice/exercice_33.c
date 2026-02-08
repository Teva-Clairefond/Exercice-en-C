#include <stdio.h>

void foncSomme (){
    int a,b,result;
    printf("Rentrez le nombre a :\n");
    scanf("%d",&a);
    printf("Rentrez le nombre b :\n");
    scanf("%d",&b);
    if (a!=b) {
        result = a + b;
    } else {
        result = (a + b)*3;
    }
    printf("Le résultat est %d", result);
}



int main() {
    // Exercice 33
    foncSomme();
    return 0;
}
