// Desenvolva uma função em C para imprimir na tela a seguinte mensagem:
//
// ***************
// |             |
// |  numero X   |
// |             |
// ***************
//
// Onde x é o valor digitado.

#include<stdio.h>

void plate(int);

int main(){
    int x;
    while(1){

        do{
            printf("Digite um número: ");
            scanf("%d", &x);
        }while(x>=10);  
        plate(x);
    }
}

void plate(int num){
    
    for(unsigned short i=0; i<12; i++)
        putchar('*');
    
    putchar('\n');
    printf("|          |\n");
    printf("| Número %d |\n", num);
    printf("|          |\n");

    for(unsigned short i=0; i<12; i++)
        putchar('*');
    putchar('\n');
}