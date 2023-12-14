/*
Um processador tem um conversor AD de 10 bits, portanto, o range vai de 
0 a 1023. Implemente uma função que receba um valor de 0 a 1023 e retorne
o valor linearmente proporcional para 8 bits, isto é, de 0 a 255.
*/

#include<stdio.h>

int conv_8bits(int);

void main(){
    int val_10bits;
    printf("Leitura 10 bits: ");
    scanf("%d", &val_10bits);
    printf("Conversor para 8 bits: %d\n", conv_8bits(val_10bits));   
}

int conv_8bits(int x){
    return (x/1023.0)*255.0;
}