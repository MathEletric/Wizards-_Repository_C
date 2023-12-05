// Programa onde você ecolhe qual a taboada e até onde quer calcular.

#include<stdio.h>

int main(){
    int i,
        j,
        c;
    printf("Digite qual taboada: ");
    scanf("%d", &i);
    printf("Digite até qual valor quer gerar: ");
    scanf("%d", &j);
    c = 1;
    while(c <= j){
        printf("%3d x %3d = %3d\n", i, c, i*c);
        c++;
    }
}