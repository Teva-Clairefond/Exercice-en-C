#include <stdio.h>

int main () {
    float a,b,s;
    printf ("La valeur du nombre a est : \n");
    scanf ("%f", &a); 
        // Pourquoi donner l'adresse de la variable au lieu de la variable elle même ?
        // Car ici on indique : "Stocke la valeur x à l'adresse mémoire correspondant à la variable a de type float."
    printf ("La valeur du nombre b est : \n");
    scanf ("%f", &b);
    s = a + b;
    // printf ("La valeur de %f + %f est : %f",a,b,s); //ici on a un résultat de type float avec 6 zeros après la virgule.
    // arrangeons cela :
    printf ("La valeur de %.2f + %.2f est : %.2f",a,b,s);
    return 0;
}