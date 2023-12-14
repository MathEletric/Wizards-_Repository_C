#include<stdio.h>

// Note que podemos ter mais de uma variável de controle para o laço for.

int main(){
    for(unsigned char a=0,b=0; a+b<=10;a++, b += a)
        printf("a++ = %d,  b + a = %d\n", a, b);
}