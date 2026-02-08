#include <stdio.h>

int main() {
    // Exercice 47
    int nb,i=0;
    do{ 
        scanf("%d", &nb);
        
        if(nb == 3){
        i = i + 1;
        }         
    }while(nb != 0);
    
    if(i != 0) 
        printf("3 y est %d fois", i);
    else   
        printf("3 n'a pas été rentré une seule fois.");  
}
