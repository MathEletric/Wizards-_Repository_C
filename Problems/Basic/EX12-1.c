/*
Escreva um programa que leia quatro números e imprima-os em ordem 
não-decrescente.
*/

#include<stdio.h>
#include<stdlib.h>

void main(){
    int a, b, c, d, aux;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    system("clear");
    printf("Ordem digita:    %d %d %d %d\n", a, b, c, d);

    if(a>b){
        aux = a;
        a = b;
        b = aux;
    }

    if(b>c){
        aux = b;
        b = c;
        c = aux;
    }

    if(c>d){
        aux = c;
        c = d;
        d = aux;
    }

    if(a>b){
        aux = a;
        a = b;
        b = aux;
    }
    
    if(b>c){
        aux = b;
        b = c;
        c = aux;
    }

    if(c>d){
        aux = c;
        c = d;
        d = aux;
    }

    if(a>b){
        aux = a;
        a = b;
        b = aux;
    }

    if(b>c){
        aux = b;
        b = c;
        c = aux;
    }
    printf("Não-decrescente: %d %d %d %d\n", a, b, c, d);
}
