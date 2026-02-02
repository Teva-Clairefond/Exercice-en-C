#include <stdio.h>

int main () {
    int nb,i=1;   
    printf("Donner un nombre:");
    scanf("%d",&nb);   
    
    while(nb/10 != 0){
        nb = nb/10;  
        i = i+1;
    }
    printf("Le nombre de chiffres est %d",i);    
    return 0;
}
