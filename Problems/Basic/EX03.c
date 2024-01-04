/*
Escreva um programa que leia um valor de temperatura na escala Celsius e imprima
este valor na escala Fahrenheit.
*/

#define F(temp_celsius) ((float)temp_celsius*9/5) + 32

#include<stdio.h>

void main(){
    float temp;
    printf("Digite um valor em Graus Celsius\n");
    scanf("%f", &temp);

    printf("A temperatura convertida para Fahrenheit: %.3f\n", F(temp));
}