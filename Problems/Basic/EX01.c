/*
Parte 1:
Escreva um programa que leia um número inteiro de 1 a 9 (considere que o usuário
respeitará essa condição) e imprima a tabuada desse número no seguinte formato 
(exemplo para entrada 2):

2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20

Parte 2:
Altere o programa para imprimir os 100 primeiros múltiplos de um número 
entre 1 e 100 (validar a entrada).
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    short n,
         c=10;

    // Parte 1
    scanf("%hd", &n);
    system("clear");
    printf("Taboada do %hd.\n", n);
    while(c) 
        printf("%2hd x %2hd = %2hd\n", n, 10-c, n*(11-c--));
        printf("Fim PARTE 1\n\n");
    // Parte 2:
    do{
        printf("Qual valor quer saber os multiplos?\n");
        scanf("%hd", &n);
        if(n<1 || n>100) printf("Valor incorreto.\nDigite valor entre 1 e 100.\n");
    }while (n<1 || n>100);

    c=100;
    system("clear");
    printf("Multiplos de %hd", n);
    while(c)
        printf("%3hd x %3hd = %3hd\n", n, 100-c, n*(101-c--));
        printf("Fim PARTE 2\n\n");
}

