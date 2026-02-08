#include <stdio.h>
#include <math.h>

int main() {
    // Exercice 32
    int x1,x2,y1,y2;
    float dist;
    printf("Entrez x1 :\n");
    scanf("%d",&x1);
    printf("Entrez x2 :\n");
    scanf("%d",&x2);
    printf("Entrez y1 :\n");
    scanf("%d",&y1);
    printf("Entrez y2 :\n");
    scanf("%d",&y2);

    dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    printf("La distance est de : %f", dist);
    return 0;
}
