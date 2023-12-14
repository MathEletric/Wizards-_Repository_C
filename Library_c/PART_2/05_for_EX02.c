#include<stdio.h>
#include<stdlib.h>

// O laço for nesse modo, lembra o funcionamento do while.

int main(){
    short num,
          tentativas = 0,
          chute=0;
    do{ 
        printf("Digite um valor diferente de zero: ");
        scanf("%hd", &num);
        if(num == 0){
            printf("Você digitou zero. Tente novamente.\n");
        }
    }while(num == 0);
  
    
   
    system("clear");
    printf("Tente acertar o valor anteriormente digitado: ");

    for(; num != chute;){
        scanf("%hd", &chute);
        
        if((num != chute) && tentativas<10){
            printf("Tente novamente. "); 
        } 
        else{
            if(num == chute)
                 printf("Acertou! Você precisou tentar %hd vez(es).\n", tentativas);
        } 

        if((tentativas>=5) && (num != chute)){ 
            printf("Restam %d tentativas\n", 10 - tentativas);
        }
        
        if(tentativas>=10){
            printf("Excedeu número de tentativas.\n");
            break;
        }
    tentativas++;
    }
}