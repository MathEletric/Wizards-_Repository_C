/*
Crie um projeto em C para solicitar ao usuário o número de degraus de uma escada 
a ser desenhada na tela. Exemplo, se o número for 3, a saída de tela será:
#
##
###
*/

#include<stdio.h>
//#include<unistd.h>

int main(){

    short deg;
    scanf("%hu", &deg);

    for(short i=0; i<deg; i++){
        for(short j=deg; j>=deg-i; j--){
            //sleep(1);
            printf("#");
        }
    printf("\n");
    }
}
