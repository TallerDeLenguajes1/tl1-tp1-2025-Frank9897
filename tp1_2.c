#include <stdio.h>
#include <stdlib.h>

void mostrarvariable(int n);

int main()
{
    int n = 4;
    mostrarvariable(n);
    return 0;
}

void mostrarvariable(int n)
{
    printf("La direccion de la variable: %p\nContenido de la variable: %d",&n,n);
}