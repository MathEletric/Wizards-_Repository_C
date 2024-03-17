// Diferentemente do 'while', o 'do while' executa seu bloco ao menos uma vez.
// Assim como o while, posso omitir os colchetes para quando é uma única linha
// de instrução. Frequentemente usado para menus, pois o menu deve ser executado
// ao menos uma vez.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h> // Para evitar trabalhar com tabela ASC

int main(){
    // Habilita o console a imprimir PT-BR
    // Obs: Os valores serão mostrados com
    // vírgula e não com ponto. Para o con
    // sole do vscode, esta lib é irrelevante.
    setlocale(LC_ALL, "Portuguese_Brazil");
    char opt;

    do{
        printf("(a) Menus 1.\n(b) Menus 2.\n(e)Exit\nOpção: "); 
        scanf(" %c", &opt);
       // system("clear");
        // Normalmente ocorre chamada de função para os casos.
        switch(opt){
            case 'A':
            case 'a':
                printf("Menu fictício 1\n");
                break;
            case 'B':
            case 'b':
                printf("Menu fictício 2\n");
                break;
            case 'E':
            case 'e':
                printf("Saiu do sistema...\n");
                break;
            default:
                printf("Iválido.\n");
                break;
        }
    }while (opt != 'e' && opt != 'E');   
}

    
                                            
                                            