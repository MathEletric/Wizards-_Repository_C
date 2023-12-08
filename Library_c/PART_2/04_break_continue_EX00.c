#include<stdio.h>

int main(){
    char i=0;
    while(i<=15){
        // Começa a impressão em zero, pois o incrimento é processado
        // depois da substituição pelo tipo %d.
        printf("%d\n", i++);
        if(i==10) break;
    }
}

