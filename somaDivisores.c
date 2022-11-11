/**
* Arquivo: somaDivisores.c
* Autor: Joao Vitor Guimaraes de Souza
* Matrícula: 12111EBI030
* Criado em: 03/11/2022
*/

#include <stdio.h>


int main(void) {
    int N;
    int S = 0;
    int T;
    
    scanf("%d", &N);

    for (T = 1; T <= N; T++){
        if(N % T == 0){
            S = S + T;
        }
    }
    

    printf("Soma = %d", S);
    
    return 0;
}