#include <stdio.h>
int positivo_negativo(int valor)
{
    if(valor<0)
        printf("valor negativo");
    else
        printf("valor positivo ");
    return valor;
}
int main()
{
    int numero,resultado;
    printf("digite um numero inteiro\n");
    scanf("%d",&numero);
    resultado = positivo_negativo(numero);
    printf(" %d\n",resultado);
}