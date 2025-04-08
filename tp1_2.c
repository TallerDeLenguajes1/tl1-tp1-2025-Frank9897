#include <stdio.h>
#include <stdlib.h>

void orden(int a, int b);

int main()
{
    int a = 8,b = 8;
    orden(a,b);
    return 0;
}

void orden(int a, int b)
{
    int menor=0,mayor=0;
    if (a<b)
    {
        menor=a;
        mayor=b;
        printf("Numero menor: %d\nNumero mayor: %d",menor,mayor);
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