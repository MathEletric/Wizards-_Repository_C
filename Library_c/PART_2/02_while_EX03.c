// Impressão das taboadas do 1 até N.

#include<stdio.h>

int main(){

    short N,
          c = 10;

    printf("Até qual taboada quer imprimir?\n");
    scanf("%hd", &N);
    while (N){
        while (c){
            printf("%2hd x %2hd = %2hd\n", N, c, N*c);
            c--;
        }
        putchar('\n'); // Imprime um único caracter.
        N--;
        c=10;  
    }
}