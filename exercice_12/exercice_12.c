#include <stdio.h>

int main () {
    float a,b,c,x;
    printf("Rentrez le nombre a :\n");
    scanf("%f",&a);
    printf("Rentrez le nombre b :\n");
    scanf("%f",&b);
    printf("Rentrez le nombre c :\n");
    scanf("%f",&c);
    x =  (a + b + c)/3;
    printf("La moyenne est donc %.2f", x);
    return 0;
}
