/*
Desenvolva uma função em C para calcular a potenciação de um número real.
Calculará o resultado de x^n sendo x um real e n um inteiro.
*/

#include<stdio.h>
#include<stdlib.h>
float pot(float, int);


int main(){
    float x;
    int n;
    printf("Escreva o valore real x e a potencia n, respectivamente: ");
    scanf("%f %d", &x, &n);
    system("clear");
    printf("(%.3f)^%d = %.3f\n", x, n, pot(x, n));
}

float pot(float x, int n){
    float pot = x;
    for(short i=1; i<n; i++){
        pot = pot*x;
    }
    return pot;
}