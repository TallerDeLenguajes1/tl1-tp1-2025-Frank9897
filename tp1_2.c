#include <stdio.h>
#include <stdlib.h>

int devolvercuadrado(int n);

int main()
{
    int n = 4,ncuadrado;
    ncuadrado=devolvercuadrado(n);
    printf("El cuadrado de %d es %d",n,ncuadrado);
    return 0;
}

int devolvercuadrado(int n)
{
    return n*n;
}