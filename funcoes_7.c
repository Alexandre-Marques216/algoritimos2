#include <stdio.h>
void perfeito(int valor)
{
    int contador=0,temp[contador+1],res;
    for(int i=1;i<valor;i++)
    {
        if(valor%i==0)
        {
            temp[contador]= i;
            contador++;
        }
    }
    for(int i=0;i<contador;i++)
    {
        res = res + temp[i];
    }
    if(res == valor)
    {
        printf("valor perfeito");
    }
    else
    {
        printf("valor imperfeito");
    }
}
int main()
{
    int numero;
    printf("digite um valor inteiro\n");
    scanf("%d",&numero);
    perfeito(numero);
}