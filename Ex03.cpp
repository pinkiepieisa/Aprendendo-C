#include <stdio.h> // Para usar o printf

int main () {
int x = 10;
//Declaração de uma variável onde foi atribuido o valor 10

int *p = &x;
// Um ponteiro que recebe o endereço de memória do valor da variável x

int **pp = &p;
// Um ponteiro que recebe o endereço do espaço de memória de outro ponteiro

printf("Valor de x usando o ponteiro pp e: %d\n", **pp);
}
