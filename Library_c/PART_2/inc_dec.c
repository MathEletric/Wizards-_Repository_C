// Incremento e decremento.

#include<stdio.h>

int main(){
    int x = 5,
        y = 8,
        her;

    printf("x = %d\ny = %d\n\n", x, y);
    x++;
    y++;
    printf("x = %d\ny = %d\n\n", x, y);
    x = x + 1;
    y = y + 1;
    printf("x = %d\ny = %d\n\n", x, y);

    scanf("%d", &her);
    printf("%d", 2*her);
}
