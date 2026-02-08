#include <stdio.h>

int check(int a){
    return (a%3==0) || (a%7==0);
}

int main(void) {
    // Exercice 35
    printf("%d",check(4));
    return 0;
}
