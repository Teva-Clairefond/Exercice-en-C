#include <stdio.h>

int main () {
    int n,i=1,j;
    printf("Entier n à rentrer :\n");
    scanf("%d",&n);
    while (i<=n){
        for (j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
        i++;
    }
    return 0;
}
