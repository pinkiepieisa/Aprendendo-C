#include <stdio.h> // Necessário para o printf

int main () {
    int x = 5; 
    //! Declarando o tipo e atribuindo um valor a uma variável

    int *p = &x; 
    //! Declarando um ponteiro e atribuindo o endereço de x a ele
    //!  & = referência, é utilizado para obter o endereço de uma variável 
    // Exemplo: *p = 10; 
    // Atribui o valor 10 à variável apontada por p

    printf("Valor de x: %d\n", *p);
    //! Imprimindo o valor de x atráves do ponteiro p
    // * é o que indica que uma variável é um ponteiro
    // * = desreferência, ou seja, acessa o valor que está armazenado no endereço de memória que o ponteiro aponta


    return 0; 
    // método main retorna 0, ele precisa dar algum retorno 
}

