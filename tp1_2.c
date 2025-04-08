#include <stdio.h>
#include <stdlib.h>

void invertir(int a, int b);
void orden(int a, int b);

int main()
{
    int a,b;
    printf("Ingrese por pantalla dos numeros\nNumero 1: ");
    scanf("%d", &a);
    printf("\nNumero 2: ");
    scanf("%d", &b);
    invertir(a,b);
    orden(a,b);
    return 0;
}


void invertir(int a, int b)
{
    printf("Numero A: %d\nNumero B: %d",a,b);
    int aux = b;
    b=a;
    a=aux;
    printf("\nInvertir...\nNumero A: %d\nNumero B: %d\n",a,b);
}
void orden(int a, int b)
{
    int menor=0,mayor=0;
    if (a<b)
    {
        menor=a;
        mayor=b;
        printf("\nNumero menor: %d\nNumero mayor: %d",menor,mayor);
    }else if (b<a)
    {
        menor=b;
        mayor=a;
        printf("Numero menor: %d\nNumero mayor: %d",menor,mayor);
    }else
    {
        menor=a;
        mayor=b;
        printf("Numero menor: %d\nNumero mayor: %d",menor,mayor);
    }
}