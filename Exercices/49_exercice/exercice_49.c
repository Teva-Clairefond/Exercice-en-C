#include <stdio.h>

int main() {
    // Exercice 49
    int i;
    long long n1=1, n2=1, somme;
    for (i=1;i<=50;i++){
        somme = n1 + n2;
        n1 = n2;
        n2 = somme;
        printf("%lld ",somme);
    }
}
