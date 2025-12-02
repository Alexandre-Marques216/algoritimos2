#include <stdio.h>
int par_impar(int valor)
{
    if(valor % 2 == 0)
        printf("valor par\n");
    else
        printf("valor impar\n");
    return valor;
}
int main()
{
    int numero,valor;
    printf("digite um numero inteiro\n");
    scanf("%d",&numero);
    valor = par_impar(numero);
    printf("%d\n",valor);
}