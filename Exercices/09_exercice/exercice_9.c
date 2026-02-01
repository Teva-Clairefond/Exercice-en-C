#include <stdio.h>

int main (){
    float a,b,c;
    printf("Rentrez le nombre a :\n");
    scanf("%f",&a);
    printf("Rentrez le nombre b :\n");
    scanf("%f",&b);
    printf("Rentrez le nombre c :\n");
    scanf("%f",&c);
    if (a>b){
        if (b>c){
            printf("a est le plus grand");
        } else if (a<c) {
            printf("c est le plus grand");
        } else {
            printf ("a et c sont les plus grands");
        }
    } else if (a<b){
        if (b<c) {
            printf("c est le plus grand");
        } else if (b>c){
            printf("b est le plus grand");
        } else {
            printf("b et c sont les plus grands");
        }
    } else {
        if (a == b && a == c) {
            printf ("a egale b egale c");
        }
        else {
            printf("a et b sont les plus grands");
        }
    }
    
    return 0;
}