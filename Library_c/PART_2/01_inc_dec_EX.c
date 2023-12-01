/*
Desenvolva um projeto em C que peça ao usuário para inserir 4 números inteiros
positivos e o sistema trará como resultado:
- O primeiro número somado a 1;
- O segundo número subtraído em 1;
- O terceiro número igual ao valor original do primeiro;
- O quarto número igual à soma do valor original do terceiro com o segundo
 número atualizado;
- A soma de todos os números envolvidos no processo.
Exemplo:
O usuário entra com 5, 6, 10 e 14.
O sistema mostra os resultados 6, 5, 5 e 15 e a soma de todos: 66.
*/


#include<stdio.h>

int main(){
    int A, B, C, D;
    printf("Digite quatro valores.\n");
    scanf("%d\n", &A);
    scanf("%d\n", &B);
    scanf("%d\n", &C);
    scanf(" %d\n",&D);

    printf("ENTRADA: %d, %d, %d, %d\n", A, B, C, D);
    printf("SAÍDA: %d, %d, %d, %d\n", A++, --B, C=--A, D=C+B);



    



}
