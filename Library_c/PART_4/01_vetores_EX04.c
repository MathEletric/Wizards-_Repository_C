// Passagem de vetor como parâmetro de função, iterando a função em um for na main.

#include<stdio.h>

#define size 15

int fibo_vec(int vec[], int i);

void main(){

    int vect[size];

    for(int i=0; i<size; i++)
        printf("vect[%d] = %d\n", i, fibo_vec(vect, i));


}

int fibo_vec(int vec[], int i){
    vec[0] = 0;
    vec[1] = 1;
    if(i<size-2)
        vec[i+2] = vec[i+1] + vec[i];
    return vec[i];
         
}

