/**
* Arquivo: imc.c
* Autor: João Vitor Guimarães de Souza
* Matrícula: 12111EBI030
* Criado em: 03/11/2022
*/

#include <stdio.h>


int main(void) {
    float P, A, IMC;
    
    scanf("%f", &P);
    scanf("%f", &A);
    
    IMC = P / (A*A);
    
    if(IMC < 16){
        printf("Para um peso %.2fkg e uma altura de %.2fm, temos um IMC = %.2d que equivale a Perigo de vida", P, A, IMC);
    }
    if(IMC >= 16 && IMC < 17){
        printf("Para um peso %.2fkg e uma altura de %.2fm, temos um IMC = %.2f que equivale a Muito abaixo do peso", P, A, IMC);
    }
    if(IMC >= 17 && IMC < 18.5){
        printf("Para um peso %.2fkg e uma altura de %.2fm, temos um IMC = %.2f que equivale a Abaixo do peso", P, A, IMC);
    }
    if(IMC >= 18.5 && IMC < 25){
        printf("Para um peso %.2fkg e uma altura de %.2fm, temos um IMC = %.2f que equivale a Peso normal", P, A, IMC);
    }
    if(IMC >= 25 && IMC < 30){
        printf("Para um peso %.2fkg e uma altura de %.2fm, temos um IMC = %.2f que equivale a Acima do peso", P, A, IMC);
    }
    if(IMC >= 30 && IMC < 35){
        printf("Para um peso %.2fkg e uma altura de%.2fm, temos um IMC = %.2f que equivale a Obesidade grau I", P, A, IMC);
    }
    if(IMC >= 35 && IMC < 40){
        printf("Para um peso %.2fkg e uma altura de %.2fm, temos um IMC = %.2f que equivale a Obesidade grau II", P, A, IMC);
    }
    if(IMC > 40){
        printf("Para um peso %.2fkg e uma altura de %.2fm, temos um IMC = %.2f que equivale a Obesidade grau III", P, A, IMC);
    }
    return 0;

    }