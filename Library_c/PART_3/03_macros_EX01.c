// Podemos trabalhar com dados distintos dado a mesma macro.

#include<stdio.h>

#define mult(a,b) a*b
#define div(a,b)  a/b

void main(){
    int var1int = 3,
        var2int = 10;

    float var1float = 3.14,
          var2float = 2.72;
    
    printf("%f\n", mult(var2float,var1float));
    // A divisão é truncada para o valor inteiro mais proximo. Não aceita %f.
    printf("%d\n", mult(var2int, var1int)); 

    // NOte que o resultado da chamada da macro foi guardado em variáveis
    // de tipos diferentes.

    int   result_i;
    float result_f;

    result_i = (float)div(10,3);
    result_f = (float)div(10,3); // Ou div(10.0, 3.0)

    // Note que div(10,3) é transformado em 10/3 e 10/3 é transformado em 3
    // caso não coloquemos o indicador float na frente da expressão. O resultado
    // da expressão que é guardado em result_f.

    printf("result_i = %d, result_f = %.3f\n", result_i, result_f);
}