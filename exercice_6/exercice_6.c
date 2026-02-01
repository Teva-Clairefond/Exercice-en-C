#include <stdio.h>

int main (){
    int n1;
    int n2;
    int x;
    printf ("La valeur de n1 est : \n");
    scanf ("%d",&n1);
    printf ("La valeur de n2 est : \n");
    scanf ("%d",&n2);
    printf ("n1 vaut %d et n2 vaut %d\n", n1,n2);
    x = n1;
    n1 = n2;
    n2 = x;
    printf ("Et maintenant n1 vaut %d et n2 vaut %d", n1,n2);
    return 0;
}