// Macros são palavras-chave para chamar trechos de código mais longos. Basicamente,
// aumenta o nível de abstração do código.

// Para isso, usamos #define, que é a diretiva que passamos para o pre-processador
// significa que será processado antes de acontecer a compilação, por isso não
// precisamos usar ponto-e-vírgula ao final.

// O pre-processador substitui no código-fonte que será compilado as diretivas.

#include<stdio.h>

#define mult1(a,b) a*b;
#define mult2(a,b) (a)*(b)

void main(){
    int a, b, res;
    res = mult1(5,2)  // Note que ao colocar ponto-e-vírgula na macro,
                      // Não precisamos por na chamada da macro.
    printf("%d\n", res);

    // Para garantir que seja feito pela macro (1+4)*(2+1), precisamos por
    // parenteses na definição da macro.
    printf("%d\n", mult(1+4,2+1)); 

    // Uma boa prática para evitar esse tipo de erro no pre-processador é
    // por parenteses em tudo: #define mult2(a,b) ((a)*(b))
    }