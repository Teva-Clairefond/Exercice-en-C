#include <stdio.h>

int main (){
    int nb;
    printf ("Le nombre choisi est :");
    scanf ("%d",&nb);
    if (nb%2==0) {
        printf ("Le nombre est pair.");
    } else {
        printf ("Le nombre est impair.");
    }
    return 0;
}