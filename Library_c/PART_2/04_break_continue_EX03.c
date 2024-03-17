/*
Escreva um código em linguagem C que gere a Série de Fibonacci de 0 até no 
máximo o valor 1000 na tela. A Série inicia com a sequência 0, 1 e o próximo
número sempre será o resultado da soma dos dois anteriores:
 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...
*/

#include<stdio.h>
#include<unistd.h>

int main(){
    int a1 = 0,
        a2 = 1,
        a3;
    char ok;
 
    ok = 0;
    while(!ok){
        a3 = a2 + a1;
        a1 = a2;
        a2 = a3;

        if(a1 >= 1000){
            ok = 1;
            continue;
        }
    sleep(1);
    printf("%d\n", a1);
    }
}