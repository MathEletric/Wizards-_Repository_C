// Criar uma função/procedimento em C que imprime 10 asteriscos em sequência,
// sempre que o usuário digitar o número 7.

#include<stdio.h>

void ast();

int main(){

    unsigned char i;

    while (1){
        do{
            printf("Digite 7: ");
            scanf("%hhd", &i);
        }while(i!=7);
        ast();
    }  
}
void ast(){
    printf("**********\n");
}