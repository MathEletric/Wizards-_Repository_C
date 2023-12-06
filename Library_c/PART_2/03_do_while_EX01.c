/*
Desenvolva um programa em C que consiste em um sistema de menus de um cadastro 
de cliente. O sistema deve apresentar as seguintes opções:
N para Novo Cliente;
C para Consultar Clientes;
D para Deletar Clientes;
L para Listar Clientes;
S para Sair.
A entrada deverá aceitar maiúsculas e minúsculas. Ao acessar o menu, o resultado 
será meramente ilustrativo, imprimindo na tela o menu hipotético acessado.
*/

// Temos a função 'puts' que imprime no console, porém, não imprime valores
// de variáveis. Pula automaticamente uma nova linha.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    char opt;
    do{
        printf("(N) para Novo Cliente.\n");
        printf("(C) para Consultar Clientes.\n");
        printf("(D) para Deletar Clientes.\n");
        printf("(L) para Listar Clientes.\n");
        printf("(S) para Sair.\n");
        printf("Opção: ");
        scanf(" %c", &opt);
        system("clear");
        switch(opt){
        case 'N':
        case 'n':
            printf("Entrando no menu de cadastro...\n");
            break;
        case 'C':
        case 'c':
            printf("Entrando no menu de consultas...\n");
            break;
        // Inserir os outros casos...
        case 'S':
        case 's':
            printf("Saindo do sistema...\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
        }

    }while(opt != 's' && opt != 'S');
}