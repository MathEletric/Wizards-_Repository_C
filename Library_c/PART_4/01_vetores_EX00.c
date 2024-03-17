#include<stdio.h>

// Podemos definir constantas:

#define N1 10  // Através da diretiva define.
const N2 = 10; // N1 pode ser argumento vetor mas N2 não.

// Fora do vetor const funciona normalmente. Const ocupa um espaço físico de
// memória.




void main(){
    
    int vect[10] = {1, 2, 3, 4, 100, 101}; // Padrão de carga inicial.
                                           // Como não valoramos as outras
                                           // posições, o compilador
                                           // completa com zero.

    printf("%d\n", vect[0]);
    printf("%d\n", vect[1]);
    printf("%d\n", vect[2]);
    printf("%d\n", vect[3]);
    printf("%d\n", vect[4]);

    printf("Laço for:\n");
    for(int i=0; i < sizeof(vect)/sizeof(int); i++)
        printf("%d\n", vect[i]);

    printf("Laço for N2:\n");
    for(int i=0; i < N2; i++)
        printf("%d\n", vect[i]);
}