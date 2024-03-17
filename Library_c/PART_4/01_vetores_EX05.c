/*
Você foi encarregado de projetar um voltímetro com a função TRUE RMS. Primeiramente,
você deve projetar uma função em C que receba o número de pontos de tensão no domínio
discreto.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float true_rms(float vec_samples[], int samples);

void main(){

    int samples;

    printf("Quantas amostras?\n");
    scanf("%d", &samples);

    float vec_value_samples[samples];

    for(int i=0; i<samples; i++){
        printf("Digita o valor da amostra %d: ", i+1);
        scanf("%f", &vec_value_samples[i]);
    }
   
    system("clear");
    printf("Amostras digitadas:\n");

    for(int i=0; i<samples; i++)
        printf("%d: %.3f\n", i+1, vec_value_samples[i]);
    
    // Calculo RMS:
    printf("Valor RMS: %.3f\n", true_rms(vec_value_samples, samples));

    
}

float true_rms(float vec_samples[], int samples){

    float sum_res=0;
    // Raiz quadrada.
    for(int i=0; i<samples; i++)
        vec_samples[i] *= vec_samples[i];

    // Soma de todos os valores. 
    for(int i=0; i<samples; i++)
        sum_res = sum_res + vec_samples[i];

    sum_res = (float)sum_res/samples;
    return sqrt(sum_res);


}

