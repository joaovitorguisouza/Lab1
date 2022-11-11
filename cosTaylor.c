/**
* Arquivo: cosTaylor.c
* Autor: João Vitor Guimarães de Souza
* Matrícula: 12111EBI030
* Criado em: 03/11/2022
*/

#include <stdio.h>
#include <math.h>


int main()
{
    double x, z = 0.0;
    int n, i, j;
    scanf("%lf%d", &x, &n);
    double fat[n], fat2[n];

    fat[1] = 1.0;
    for(j = 1; j < n; j++){
        fat2[j] = 2.0 *i;
        fat[j] = fat[j] * (fat2[j] - j); 
        printf("\n%lf\t%lf", fat[j], fat2[j]);

    }

    fat[0] = 1.0;
    for(i = 0; i < n; i++ )
    {
        //printf("\n%d :: %lf :: %d ", fat2, fat, i); // DEBUG

        z = z + ( ( pow(-1 , i)*pow(x, (2*i)) ) / (fat[i]) ); 

    }

        printf("\n\ncos(x) = %lf\n", z);    

    return 0;
}