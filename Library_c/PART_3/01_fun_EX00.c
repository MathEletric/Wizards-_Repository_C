#include<stdio.h>

// A biblioteca padrão stdio possibilita a chama das funções básicas de
// linguagem C.

// Funções que não retornam valor são chamadas de procedimentos.
// Elas são funções do tipo void, onde void é o tipo de dado.
// Em caso de funções que não retornam valor, temos duas opção equivalentes
// para usar: void funcao() ou void funcao(void).

// Variáveis decladas dentro do corpo/escopo ou bloco de instrução da função,
// existem somente no contexto da execução da função.

// Para poder desenvolver as funções depois da função main, devemos
// 'prototipar' elas antes da main. Isso equivale a 'avisar' o compilador
// que a função está abaixo da main.

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