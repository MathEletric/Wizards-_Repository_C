// Impressão da taboada do 9 de trás pra frente.

#include<stdio.h>

int main(){
    // Note que enquanto i tiver valor diferente de zero, a condição é
    // interpretada como verdadeira. 
    int i = 10;
    while (i){
        printf("9 x %2d = %2d\n", i, 9*i);
        i--;
    }
    

}