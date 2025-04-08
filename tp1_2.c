#include <stdio.h>
#include <stdlib.h>

void invertir(int a, int b);

int main()
{
    int a = 4,b = 8;
    invertir(a,b);
    return 0;
}

void invertir(int a, int b)
{
    printf("Numero A: %d\nNumero B: %d",a,b);
    int aux = b;
    b=a;
    a=aux;
    printf("\nInvertir...\nNumero A: %d\nNumero B: %d",a,b);
}