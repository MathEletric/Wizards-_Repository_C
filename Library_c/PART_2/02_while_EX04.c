/*
Você quer determinar o range de um gráfico que irá apresentar a resposta em 
frequência de um filtro. Desenvolva o projeto em C para solicitar a entrada do 
range de frequência em Hz, onde o mesmo deve ser impresso na tela. Exemplo: o 
usuário entra com 100 e 110. O programa gera a seguinte saída:
100Hz
101Hz
102Hz
103Hz
104Hz
105Hz
106Hz
107Hz
108Hz
109Hz
110Hz
*/

#include<stdio.h>

int main(){
    short lim_sup, lim_inf;
    printf("Limite superior: ");
    scanf("%hd", &lim_sup);
    printf("Limite inferior: ");
    scanf("%hd", &lim_inf);

    while (lim_inf<=lim_sup)
        printf("%3hd\n Hz",lim_inf++);
    
}