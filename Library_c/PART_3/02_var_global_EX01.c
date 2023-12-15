// Além dos modificadores de tipo de dados, também temos os modificadores
// de tipo de armazenamento, como o static. 

#include<stdio.h>

int f1(),
    f2();

int main(){
    // Note que nessas chamadas de f1, o modificador do tipo de armazenamento
    // static, não deixa a variável local var, ser destruída, ou seja, ela sempre
    // é atualizada com um novo incremento. É como se ao chamar a função, ela
    // nao precisasse ser reconstruida pela linha static int var. É preservada.
    printf("%d ",   f1());
    printf("%d ",   f1());
    printf("%d \n", f1());

    // Quando não usamos static, a variável é destruido sempre quando a função
    // é encerrada.
    printf("%d ",   f2());
    printf("%d ",   f2());
    printf("%d \n", f2());

    // Agora poderemos chamar funções que usam variáveis da main e usam
    // em outros momentos, quando são chamadas.
}

int f1(){
    static int var = 0;
    return var++;
}

int f2(){
    int var = 0;
    return var++;
}

// Ao declarar uma variável global do tipo de armazenamento static, estamos dizendo
// que ela tem valor apenas naquele codigo-fonte. Ferramenta interessante em
// contexto de projetos modulares.

// Um outro modificador de armazenamento é o volatile, que para microcontroladores
// é bastante interessante. Ao declarar uma variável com esse modificador, você
// irá informar ao compilador, que mesmo não havendo uma atribuição via sw dessa
// variável, o mesmo não deve criar otimizações, pois essa variável pode ser
// modificada via hardware.

// Um outro modificador de armazenamento é o extern, que para projetos com vários
// arquivos de codigo-fontes, é interessante. Para caso, um arquivo que não seja
// a main, use variáveis da main, nesse arquivo, teremos que usar o modificador
// extern, para o compilador entender que deve buscar a declaração além daquele
// arquivo. Também funciona caso seja necessário usar uma função que não está
// no mesmo código-fonte aonde queremos chama-la. Devemos usar o termo exterm
// no local de prototipagem.
// Vale ressaltar que usamos variáveis globais do codigo-fonte da main, quando
// chamamos para uma função de outro arquivo usar através do modificador extern.

// Temos também o especificado de classe do tipo register. Existe a possibiliade
// de ganho de desempenho quando usado. Antigamente, esse especificador, especificava
// aonde o dado deveria ser armazenado temporariamente, que era nos registradores
// de trabalho da CPU.

// Temos também o especificado de classe do tipo auto. Não usado por ao declarar
// uma variável, implicitamete há o modificador auto. Era usado para especificar
// que é local. Se supõe que é um modificador pra compatibilizar a linguagem 
// B com a c.