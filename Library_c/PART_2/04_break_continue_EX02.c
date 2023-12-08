#include<stdio.h>

int main(){
    char ok, chr;
    ok = 0;
    while(!ok){
        chr = getchar();
        if(chr=='a'){
            ok = 1;
            continue; // Valida a condição do laço antes de continuar.
                      // Ou seja, so executa a próxima linha (putchar)
                      // apos testar a condição do while                
        }
    putchar(chr+2);   // Decodificação pela tabela ASCII
    }
}
