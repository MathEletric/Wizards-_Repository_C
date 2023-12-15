#include<stdio.h>

// Note que cada variável var tem seu contexto ou bloco de execução.
// Como não à uma variável var declarada no escopo de f2, a mesma usa
// a var global.

void f1(),
     f2();

int var = 2; // Global

int main(){
    int var;
    var = 0;
    printf("var da main: %d\n", var);
    f1();
    f2();
}

void f1(){
    int var = 1;
    printf("var da f1: %d\n", var);
}

void f2(){
    printf("var da f2: %d\n", var);
}