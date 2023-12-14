// Tabela de placar ajustavel.
// Implementar quantidade de linhas.

#include<stdio.h>

void dimen_plate(int, char);
void ast(int);
void vaz(int);

int main(){

    while (1){

        short c;
        char n;
        printf("Digite o cumprimento e valor do placar: \n");
        scanf("%hd %c", &c, &n);
        dimen_plate(c, n);
    }
}


void dimen_plate(int L, char num){

    if(L>=10 && !(L%2)){
        ast(L);
        vaz(L);
       
        putchar('|');
        for(unsigned short i=0; i<((L-8)/2)-1; i++){
            putchar(' ');
        }

        printf("Número %c", num);
    
        for(unsigned short i=1; i<((L-8)/2); i++){
            putchar(' ');
        }   
        putchar('|');
        putchar('\n');
       
        vaz(L);
        ast(L);
    }
    else{
        printf("Entrada invalida para largura. Tente novamente\n");
    }
}




void ast(int n){
    for(unsigned short i=1; i<=n; i++)
        putchar('*'); 
    putchar('\n');
}

void vaz(int n){
    for(unsigned short i=1; i<=n; i++){
        if(i==1) 
            putchar('|');
        else if(i>1 && i<n) 
            putchar(' ');
        else
            putchar('|');
    }   
    putchar('\n');
}




  /*
    for(unsigned short i=0; i<L; i++){
        if(i==0) putchar('|');
        if(i>0 && i<A){
            if(!A%2){
                for(unsigned short i=0; i<=(A-6); i++){

                }


            }
            printf("Número %c", num);
        }
        if(i==A) putchar('|');
    }
    */