/**
* Arquivo: fibonacci.c
* Autor: Joao Vitor Guimaraes de Souza
* Matrícula: 12111EBI030
* Criado em: 03/11/2022
*/

#include <stdio.h>


int main(void) {
    int N;
    int T;
    int I;
    int P;
    int A;
    
    scanf("%d", &N);

    for (T = 1, I = 0, P = 1, A = 0; T <= N; T++){
        printf("%d,", I);
        I = I + P;
        P = A;
        A = I;
    }
    printf(" ...");

    return 0;
}