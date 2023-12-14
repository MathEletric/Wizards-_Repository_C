#include<stdio.h>

// A biblioteca padrão stdio possibilita a chama das funções básicas de
// linguagem C.

// Funções que não retornam valor são chamadas de procedimentos.
// Elas são funções do tipo void, onde void é o tipo de dado.
// Em caso de funções que não recebem parâmetros, temos duas opção
// equivalentes: void funcao() ou void funcao(void).

// Variáveis decladas dentro do corpo ou bloco de instrução da função,
// existem somente no contexto da execução da função.

// Para poder desenvolver as funções depois da função main, devemos
// 'prototipar' elas antes da main.

void linha();

int main(){
    printf("teste\n");
    linha();
    printf("teste\n");
    linha();
}

void linha(){
    for(unsigned char i = 0; i < 10; i++){
       printf("-"); 
    }
    putchar('\n');
}