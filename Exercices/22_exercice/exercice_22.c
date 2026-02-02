#include <stdio.h>

int main () {
    int i = 1, somme = 0;
    do {
        somme+=i;
        i++;
    } while (i<11);
    printf ("%d",somme);
    return 0;
}
