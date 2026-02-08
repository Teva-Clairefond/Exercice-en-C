#include <stdio.h>

void check(){
    int a,b;
    char* result;
    printf("Rentrez le nombre a :\n");
    scanf("%d",&a);
    printf("Rentrez le nombre b :\n");
    scanf("%d",&b);
    if (a==20 || b==20 || a+b==20){
        result = "TRUE";
    } else {
        result = "FALSE";
    }
    printf("%s",result);
}


int main() {
    // Exercice 34
    check();
    return 0;
}
