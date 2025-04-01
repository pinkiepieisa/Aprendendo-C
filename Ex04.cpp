#include <stdio.h> //Necessário para usar o printf 
//! Arrays são estruturas de dados que consistem em itens de dados do mesmo tipo.

//! Possuem tamanho fixo

//! Um array é um conjunto de locais na memória RAM que são relacionados entre si por possuirem todos o mesmo nome e mesmo tipo de dados.

//! Referência a uma posição em particular no array especificando seu nome e o número da posição que contém o dado que queremos manipular. 

//! As posições são contadas a partir do zero, que é a primeira posição de um array qualquer.

int main() {
    //Modos de se declarar um array
    //int x [4];
    //Tipo de dado + nome do array + tamanho do array
    // int x[] = {dados a serem armazenados}
    int x[4] = {10, 2, 4, 6};
    int *p = x;
    //Atribui o ponteiro ao primeiro elemento do array
    //o tipo do dado é dado ao ponteiro para ele saber como ler o dado

    printf("%d\n", *p);
    printf("%d\n", *(p + 1));
    //Referência o ponteiro após somar o p mais 1, mostrando o elemento da próxima posição

    return 0; //Todo método main precisa de um retorno
}