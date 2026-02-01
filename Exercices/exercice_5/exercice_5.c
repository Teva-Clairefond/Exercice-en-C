#include <stdio.h>

int main (){
    float pi = 3.14;
    float r = 5;
    float perimetre = 2*pi*r;
    float surface = pi*r*r;
    printf ("Le perimetre du cercle est 2*%.2f*%.2f = %.2f cm\n" ,pi,r,perimetre);
    printf ("La surface du cercle est %.2f*%.2f*%.2f = %.2f cm²",pi,r,r,surface);
    return 0;
}