
// Incremento e decremento.

#include<stdio.h>

int main(){
    int x = 5,
        y = 8;
    
    printf("Valores iniciais:\nx = %d e y = %d\n\n", x, y);
    // Incrementa em 1 x e y:
    x++; // Equivale à x = x + 1
    y++; // Equivale à y = y + 1
    printf("x++ = %d\ny++ = %d\n\n", x, y);
    // Decrementa em 1 x e y:
    x--;
    y--;
    printf("x-- = %d\ny-- = %d\n\n", x, y);
    // Equivalente a x++ e y++:
    ++x;
    ++y;
    printf("++x = %d\n++y = %d\n\n", x, y);

    x = 5;
    y = 8;
    
    printf("Valores iniciais:\nx = %d e y = %d\n\n", x, y);
    // Ao colocar o operador incremento/decremento antes, estamos garantindo
    // que ocorra o incrimento nela mesma antes que ocorra à atribuição.
    x = 5;
    y = ++x;
    // Para este caso, garantimos que y assumirá o valor de 5 + 1.
    printf("y = ++x -> y = %d e x = %d)\n\n", y, x);
    x = 5;
    y = x++;
    // Para este caso, garantimos que y assumirá 5, pois a atribuição do estado
    // x = 5 ocorreu antes de a variável x = 5 sofrer o incremento.
    printf("y = x++ -> y = %d e x = %d)\n\n", y, x);
}
