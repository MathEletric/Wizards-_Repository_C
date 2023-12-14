#include<stdio.h>

int sum(int, int);

int main(){
    int sum_tot;
    sum_tot = sum(sum(1,1), sum(1,1));
    printf("%d\n", sum_tot);
    }


// Para função que retornam tipo inteiro, podemos omitir o int. Porém,
// o compilador reclama.

int sum(int a, int b){
    return a+b;
}