#include <stdio.h> //Necessário para o uso do print

//Somar todos os elementos de um array usando ponteiro

int main(){
    int x[5] = {1, 2, 3, 4, 5}; // Declaração do array
    int *p = x;      // Sem o & porque x já irá se comportar como um ponteiro do primeiro elemento
    //&x represente o endereço de memória do array como um todo
    int y; // Próximo elemento do ponteiro
    int soma = 0;  //Onde será armazenado o total da soma dos elemntos do array
    for (int i= 0; i < 5; i++) { //5 vezes que o laço irá passar por esse bloco de código
    //Colocar o tipo de dado da variável implementada dentro do laço for
        y = *(p + 1);
        soma = *p + y;
        *p++;
       printf("%d\n",soma);
    }

    printf("%d\n", soma);
    
}