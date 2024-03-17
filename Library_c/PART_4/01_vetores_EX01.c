// Programa que solicita notas e calcula média usando vetores.

#include<stdio.h>
#include<stdlib.h>


void main(void){

    int size_vec, nota;
    float nota_tot=0;
    printf("Digite a quantidade de notas: ");
    scanf("%d", &size_vec);
    printf("Digite a quantidade de notas: ");

    int notas[size_vec];

    printf("Digita as notas:\n");
    for(unsigned char i=0; i<sizeof(notas)/sizeof(int); i++){
        printf("Digita a nota %d: ", i+1);
        scanf("%d", &nota);
        notas[i] = nota;
        nota_tot += nota;
    }

    system("clear");
    printf("%f\n", nota_tot);
    printf("As notas digitadas:\n");
    for(unsigned int i=0; i<sizeof(notas)/sizeof(int); i++)
        printf("Nota %d: %d\n", i+1, notas[i]);

    printf("A média: %f\n", nota_tot/size_vec);
}



