#include <stdio.h>

int main () {
    float l = 4;
    float h = 8;
    float perimetre = 2*(l+h);
    float aire = l*h;
    printf("La valeur du périmètre du rectangle est 2*(%.2f+%.2f) = %.2f cm\n",l,h,perimetre);
    printf("La valeur de l'aire du rectangle est %.2f*%.2f = %.2f cm²",l,h,aire);
    return 0;
}