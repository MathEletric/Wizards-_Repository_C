/*
Você precisa imprimir o mapa de uma memória que tem 64 bytes de endereços.
Os 6 primeiros endereços deverão ter os dados 00h, 01h, 02h, 03h, 04h, 05h e
todos os restantes FFh. Desenvolva um projeto em C que gere este mapa na tela, 
considerando que cada linha terá 16 bytes.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    system("clear");
    for(unsigned short i=0; i<=4; i++){
        for(unsigned short j = 0; j<=16; j++){
            if(j<=6 && i==0)
                printf("%2Xh ", j); // Ou printf("0%hdh ", j);
            else{
                printf("FFh ");
            }
        }
        printf("\n");
    }
}