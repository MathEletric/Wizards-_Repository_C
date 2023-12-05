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

//Abordagem 1:

/*

#include<stdio.h>
int main(){
    int A,
        A_update,
        B,
        B_update,
        C,
        C_update,
        D,
        D_update,
        sum;

    printf("Digite quatro valores.\n");
    scanf("%d\n", &A);
    scanf("%d\n", &B);
    scanf("%d\n", &C);
    scanf("%d\n", &D);

    C_update = A++;
    A_update = A;
    B_update = --B;
    D_update = C + B_update;

    sum = A +A_update + B + B_update + C + C_update + D + D_update;

    printf("ENTRADA: %d, %d, %d, %d\n", A, B, C, D);
    printf("SAÍDA: %d, %d, %d, %d, %d\n", A_update, B_update, C_update, D_update, sum);
}
*/

//Abordagem 2:

#include<stdio.h>

int main(){
    int a,
        b,
        c,
        d,
      sum;

    printf("A= ");
    scanf("%d", &a);
    printf("B= ");
    scanf("%d", &b);
    printf("C= ");
    scanf("%d", &c);
    printf("D= ");
    scanf("%d", &d);
    sum = a+b+c+d; 
    printf("Entrada: %d, %d, %d, %d\n", a, b, c, d);
    
    b--;
    d = c + b;
    c = a;
    a++;
    sum = sum +a+b+c+d;

    printf("Saída: %d, %d, %d, %d\n", a, b, c, d);
    printf("Soma=%d\n", sum);






}









