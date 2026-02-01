#include <stdio.h>

int main () {
    int i=1,somme=0;
    while (i<11) {
        somme += i;
        i++;
    }
    printf("La somme est égale à : %d", somme);
    return 0;
}
