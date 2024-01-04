// Para macros grandes:

#include<stdio.h>

#define hello printf("HELLO WORLD!\n" ); \
              printf("Continuidade!\n")  // Essa barra garante continuidade.

#define escreva(test) printf(#test)

#define numbers(index) id##index // Podemos trocar os valores dentro das variáveis,
                                 // porém, acessamos usando o mesmo endereço através
                                 // dessa macro.

#define sort(n) for(int i=1; i<=n; i++) \
                printf("Sorteio %d: %d\n", i, rand()/128) 
                // rand()/128 reduz intervalo de vamores aleatórios possíveis de 2^15 para 2^8.
                

void main(){

    int id1 = 1,
        id2 = 2,
        id3 = 3;

    hello;
    escreva(legal\n);
    printf("%d\n", numbers(1));
    sort(5);

}