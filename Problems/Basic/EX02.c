/*
Escreva um programa que leia um valor de velocidade em quilômetros por hora e 
imprima este valor em metros por segundo.
*/

#include<stdio.h>
int main(){
    float km_vel;
        
    printf("Digite uma velocidade em km/h: ");
    scanf("%f", &km_vel);
    printf("%.1f km/h = %0.3f m/s\n", km_vel, km_vel*(10.0/36.0));
}