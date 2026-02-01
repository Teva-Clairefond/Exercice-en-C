#include <stdio.h>

int main (){
    int a;
    int factorielle = 1;
    printf("Vous voulez faire la factorielle de :\n");
    scanf("%d",&a);
    for (int i=2;i<=a;i++){
        factorielle = factorielle*i;
    }
    printf("Elle est égale à %d.",factorielle);
    return 0;
}