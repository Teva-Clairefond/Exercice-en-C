#include <stdio.h>

int main () {
    int i=0;
    do {
        int produit=2*i;
        printf("2 x %d = %d\n",i,produit);
        i++;
    } while (i<11);
    return 0;
}
