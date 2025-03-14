#include <stdio.h> // Necessário para o printf

int main () {
// Chamada de um método inicial main 

int x = 2;
int y= 1;
int z;
// Declaração de variáveis

int *p = &x;
int *po = &y;
// Declaração dos ponteiros que por meio do & recebem o endereço das seguintes variáveis
// * Acessa o valor que está armazenado na memória daquela variável

printf("A variavel x possue o seguinte valor: %d\n", *p);
printf("A variavel y possue o seguinte valor: %d\n", *po);

z = *p;
*p = *po;
*po = z;

printf("O novo valor da variavel x e: %d\n", *p);
printf("O novo valor da variavel y e: %d\n", *po);

}