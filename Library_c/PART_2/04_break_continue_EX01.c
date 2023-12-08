#include<stdio.h>
#include<ncurses.h>
#include<stdio.h>
 
 // Compilador não encontrou a função bkhit()

/*
No Linux, a biblioteca <conio.h> e suas funções, como kbhit(), não estão disponíveis porque são específicas 
do ambiente Windows. No entanto, você pode alcançar funcionalidades semelhantes usando outras abordagens.
Uma maneira comum de lidar com entrada de teclado em sistemas Unix-like, como o Linux, é usar a biblioteca
 ncurses. Ela oferece funcionalidades para manipular a tela e a entrada do terminal de forma mais avançada.
*/

int main(){
    unsigned long i=0;
    while(1){
        printf("%ld\b", i);
        if (kbhit()) break;
        i++;
    }
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

int main() {
    char tecla;

    initscr(); // Inicializa a tela
    cbreak(); // Desabilita o buffer de linha, permite ler teclas individualmente
    noecho(); // Não exibe caracteres digitados

    while(1) {
        if (kbhit()) { // Verifica se uma tecla foi pressionada
            tecla = getch(); // Obtém a tecla pressionada
            printw("Tecla pressionada: %c\n", tecla);
            if (tecla == 'q' || tecla == 'Q') {
                printw("Saindo...\n");
                break;
            }
        }
        // Outras operações do programa podem ser executadas aqui
        refresh(); // Atualiza a tela
    }

    endwin(); // Restaura o estado original do terminal
    return 0;
}
*/