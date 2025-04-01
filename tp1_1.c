#include <stdio.h>

int main()
{
    int num=5;
    int *pnum =&num;
    printf("\nEl contenido del puntero: %d",*pnum);
    printf("\nLa direccion de memoria almacenada por el puntero: %p",pnum);
    printf("\nla direccion de memoria de la variable: %p",&num);
    printf("\nla direccion de memoria del puntero: %p",&pnum);
    printf("\nTamanio de memoria utilizado por esa variable: %d bytes",sizeof(num));

    return 0;
}