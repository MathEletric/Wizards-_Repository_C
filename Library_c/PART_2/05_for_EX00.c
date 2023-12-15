#include<stdio.h>

int main(){
    // Note que podemos iterar até no máximo onde ocorre o overflow do tipo char.
    // Caso a condição seja após o estouro, o for continuará indefinidamente.
    // P/ i<256, temos i sendo incrementado para 0 quando i equivale a 255,
    // ou seja, i continuará sendo menor que 256 indefinidamente.
    unsigned char i;
    i = 10;
    for(unsigned char i = 0; i<255; i++)
        printf("%d\n", i);
     
    printf("Fim\n");
    printf("%d\n", i);
}
    // Se declararmos i dentro da condição do for, não podemos invoca-la fora.
    // Caso seja declarada fora, poderemos, e seu valor será o de seu ultimo
    // incremento.

    // Note que se i declarado e valorado, após i passar por todos os incrementos
    // dentro do laço for, ainda vai valer i = 10 após o laço.
