/*
desenvolva um projeto em C onde o usuário define um valor
máximo de aporte para a bolsa de valores. Após, ele entra com o valor de 5 ações
(que devem ser armazenados em um vetor) e a quantidade para cada ativo. 
O sistema imprime o valor total em dinheiro e soa um alerta caso o aporte seja
menor que o total. Desenvolva o projeto de modo a ser alterado para N ações.

Exemplo: o usuário entre com um aporte de $ 2500,00.
Ativos hipotéticos
EMPA3F: $ 12,95 Qtd30
EMPB4F: $ 19,45 Qtd14
EMPC3F: $ 22,12 Qtd50
EMPD3:$ 11,23 Qtd 100
EMPE4:$ 32,40 Qtd 200

Multiplicando cada valor pela quantidade e somando tudo, o resultado é $ 9369,80.
Portanto, o alerta será emitido, pois o aporte é menor.
*/

#include<stdio.h>
#include<stdlib.h>

void ast();

#define size_vector 5

void main(){

    float valor[size_vector], aporte, tot=0;
    int qte[size_vector];
    char flag;

    printf("Digite o valor do aporte: \n");
    scanf("%f", &aporte);

    for(unsigned char i=0; i<size_vector; i++){
        printf("Preço do ativo %d: \n", i+1);
        scanf("%f", &valor[i]);

        printf("Digite a quantidade que quer comprar: \n");
        scanf("%d", &qte[i]);
    }
    system("clear");
    
    for(unsigned char i=0; i<size_vector; i++){
        ast();
        printf("Empresa %d:\n", i+1);
        printf("O preço por ação: R$ %.2f\n", valor[i]);
        printf("A quantidade comprada: %d\n", qte[i]);
        printf("Total investido na empresa %d: R$ %.2f\n",i+1, (float)(valor[i]*qte[i]));
        tot += valor[i]*qte[i];
    }
    
    ast();
    if(tot>aporte){
        printf("Valor do aporte insuficiente.\n");
        printf("Valor comprado: R$ %.2f\n", tot);
        printf("Faltou R$ %.2f para seu aporte cobrir o investimento\n", tot-aporte);
        printf("Deseja cobrir o valor? (y-sim/n-não)\n");
        scanf(" %c",&flag);
        if(flag == 'y'){
            aporte = aporte + (tot - aporte);
            printf("Seu novo aporte: R$ %.2f\n", aporte);
        }
        else{
            printf("Operação encerrada.\n");
        }
    }
    else{
        printf("Operação realizada com sucesso.\n");
    }
}

void ast(){
    for(unsigned short i=1; i<=10; i++)
        putchar('*'); 
    putchar('\n');
}