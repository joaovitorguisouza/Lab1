/**
* Arquivo:
* Autor: 
* Matrícula:
* Criado em:
*/

#include <stdio.h>

int primeiroInt;
int segundoInt;

int main(void) {
    scanf("%d %d", &primeiroInt, &segundoInt);
    printf("Soma = %d\nSubtracao = %d\n", primeiroInt + segundoInt, primeiroInt - segundoInt);
    printf("Multiplicacao = %d\nDivisao = %d\n", primeiroInt * segundoInt, primeiroInt / segundoInt);
    printf("Modulo = %d\n", primeiroInt % segundoInt);


    return 0;
}