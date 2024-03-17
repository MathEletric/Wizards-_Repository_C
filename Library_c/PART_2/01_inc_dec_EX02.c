/*
projete um código em C para receber a entrada de um número inteiro
positivo de 16 bits (deverá ser compatível entre máquinas diferentes) e o 
sistema calcule:
- O valor do número somado a 1;
- O valor do número subtraído em 1;
- A soma de todos os valores envolvidos;
- O quadrado da soma de todos os valores envolvidos.
O sistema deve apresentar o limite de valor igual a 85. Caso o usuário digite 
um valor maior que 85, deverá gerar mensagem de erro.
Exemplo:
O usuário entra com 12;
O sistema mostra os resultados 13, 11 e 36 e 1296.
*/

#include<stdio.h>

    int main(){
        unsigned short num, sum;
        printf("num= ");
        scanf("%hd", &num);
        if(num>85){
            printf("valor acima do permitido.\n");
        }else{
            sum = num;
            printf("%d, ", ++num);
            sum += num;
            printf("%d, ", num - 2);
            sum += (num - 2);
            printf("%d, %d\n", sum, sum*sum);
        }
    }
