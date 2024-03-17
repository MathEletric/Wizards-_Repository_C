// Passagem de vetores como parâmetros de função. Neste exemplo, guardamos os valores
// sequência de fibonacci.

#include<stdio.h>

#define size 30

void fibo_vec(int vec[]);
void print_fibo_vec(int vec[]);

void main(){

    int vect[size];


//    vect[0] = 10; Dessa forma, o compilador não preenche o resto do vetor
//    vect[1] = 9;  com zeros.
//    vect[2] = 8; 
//    vect[3] = 7;

    fibo_vec(vect);
    print_fibo_vec(vect);
    
}


void fibo_vec(int vec[]){
    vec[0] = 0;
    vec[1] = 1;
    for(int i=0; i<size; i++){ // ou for(int i=0; i<size-2; i++)
        if(i+2<size)
            vec[i+2] = vec[i+1] + vec[i];
    }     
}

void print_fibo_vec(int vec[]){
    for(int i=0; i<size; i++){
        printf("%d\n", vec[i]);
    }

}

// Obs: o código for(int i=0; i<sizeof(vec)/sizeof(int); i++) não funciona porque
// quando um array é passado para uma função, ele decai para um ponteiro, e sizeof(vec) 
// retornará o tamanho do ponteiro, não o tamanho do array original.