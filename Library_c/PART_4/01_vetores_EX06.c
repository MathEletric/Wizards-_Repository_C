/*
Um processador deve receber diversos bytes e realizar uma conversão criptografada 
dos mesmos. A criptografia será somar 5 aos elementos pares do vetor e subtrair 3 
dos elementos ímpares. Exemplo: você entra com os bytes 0xA0, 0x73, 0x25, 0xD3, 0xCA,
0xFE. A função os converterá para 0xA5, 0x70, 0x2A, 0xD0, 0xCF, 0xFB. Após, 
desenvolva também uma função para descriptografar estes bytes.
*/

#include<stdio.h>

void codific(int vec[], int size);
void decodific(int vec[], int size);

int vec_bytes[11] = {5, 2, 1, 6, 2, 3, 7, 2, 1, 1, 10},
    size_vec = sizeof(vec_bytes)/sizeof(int),
    aux_vec[sizeof(vec_bytes)/sizeof(int)];

void main(){

    printf("Valores do vetor: ");
    for(int i=0; i<size_vec; i++)
        printf("%d ", vec_bytes[i]);

    codific(vec_bytes, size_vec);


    printf("\nValores codificados: ");
    for(int i=0; i<size_vec; i++)
        printf("%d ", vec_bytes[i]);

    decodific(vec_bytes, size_vec);

    printf("\nValores decodificados: ");
    for(int i=0; i<size_vec; i++)
        printf("%d ", vec_bytes[i]);

    printf("\n");
}

void codific(int vec[], int size){
    for(int i=0; i< size; i++){
        if(!(vec[i]%2)){
            vec[i] += 5;
            aux_vec[i] = 1;
        }
        else{
            vec[i] -= 3;
            aux_vec[i] = 0;
        }
    }
}

void decodific(int vec[], int size){
    for(int i=0; i< size; i++){
        if(aux_vec[i] == 1){
            vec[i] -= 5;
        }
        else{
            vec[i] += 3;
        }
    }
}



