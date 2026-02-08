#include <stdio.h>

int main()
{
  int nb,inv=0;   
  printf("Donner un nombre:");
  scanf("%d",&nb);
 
  while(nb > 0){
    inv = inv * 10;  
    inv = inv + nb%10; 
    nb = nb/10;
  }
  
  printf("%d",inv);   
  return 0; 
}
