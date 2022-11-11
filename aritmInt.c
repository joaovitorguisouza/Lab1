/**
* Arquivo: aritmlnt.c
* Autor: Joao Vitor Guimaraes de Souza
* Matrícula: 12111EBI030
* Criado em: 03/11/2022
*/

#include <stdio.h>


int main(void) {
    int primeiroInt;
    int segundoInt;
    scanf("%d", &primeiroInt);
    scanf("%d", &segundoInt);
    printf("Soma = %d\nSubtracao = %d\n", primeiroInt + segundoInt, primeiroInt - segundoInt);
    printf("Multiplicacao = %d\nDivisao = %d\n", primeiroInt * segundoInt, primeiroInt / segundoInt);
    printf("Modulo = %d\n", primeiroInt % segundoInt);


    return 0;
}