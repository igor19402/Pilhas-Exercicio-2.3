#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    //Programa que ler uma frase e inverte cada palavra da própria
    Pilha p = pilha(512);
    int i;
    char frase[512];
    printf("digite a frase:");
    gets(frase);
    for(i=0;frase[i];i++){
        if(frase[i]==' '){
            printf(" ");
            while(!vaziap(p))
                putchar(desempilha(p));}
        else
            empilha(frase[i],p);}
    printf(" ");
    while(!vaziap(p))
    putchar(desempilha(p));
    destroip(&p);
    return 0;}
