#include <stdio.h>
#include <stdlib.h>

void devolvercuadrado(int n);

int main()
{
    int n = 4;
    devolvercuadrado(n);
    return 0;
}

void devolvercuadrado(int n)
{
    int ncuadrado= n*n;
    printf("El cuadrado de %d es %d",n,ncuadrado);
}