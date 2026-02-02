#include <stdio.h>

int main () {
    int n1,n2,rest;
    printf("Votre nombre n1 est :\n");
    scanf("%d",&n1);
    printf("Votre nombre n2 est :\n");
    scanf("%d",&n2);
    //Algorithme d'euclide 
    if (n2>n1){
        int n;
        n = n1;
        n1 = n2;
        n2 = n;
    }
    while (n2 != 0) {
        rest = n1%n2;
        n1 = n2;
        n2 = rest;
    }
    printf("Le PGCD est %d", n1);
    
    return 0;
}
