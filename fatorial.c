/**
* Arquivo: fatorial.c
* Autor: João Vitor Guimarães de Souza
* Matrícula: 12111EBI030
* Criado em: 03/11/2022
*/

#include <stdio.h>
#include <stdint.h>


int main(void) {
    int N;
    int64_t S = 1;
    scanf("%d", &N);
    
    while(N>1){
        S = N*S;
        N = N - 1;
    }
    
    printf("Fatorial = %lld\n", S);


    return 0;
}