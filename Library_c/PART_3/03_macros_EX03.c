/*
Desenvolva uma macro que calcule a média ponderada entre 3 notas de 1 a 10. 
Desenvolva o projeto da interface, onde o usuário entra com a nota e o
respectivo peso. Ao final do terceiro peso, o sistema calcula o resultado.
*/
#include<stdio.h>

#define media(nota1, nota2, nota3) (float)(nota1+nota2+nota3)/3

void main(){

    int nota1,
        nota2,
        nota3;

    printf("Digite 3 notas:\n");
    scanf("%d %d %d", &nota1, &nota2, &nota3);
    printf("A média: %.2f\n", media(nota1, nota2, nota3));
}

// Ressaltando que macros trabalham com todos tipos de dados sem precisar fazer declarações,
// diferentemente de funções que precisam ter seus tipos envolvidos bem definidos.

// Macros geralmente consomem menos processamento contra uma função que desempenha o mesmo papel.
// O processo de compilação pode ser mais custoso para as macros, por ela sera compilada todas
// vez que for chamada, diferente da função que é compilada uma única vez.

// Geralmente, ao usar funções, resulta num código menor em termos de Bytes e de linhas.

// Resumindo: funções aproveitam linhas de código e macros expandem linhas de código.