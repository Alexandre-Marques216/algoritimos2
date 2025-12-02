#include <stdio.h>

void imprimir(int*v,int n)
{
    int*fim;
    fim=v+n;
    while(v<fim)
    {
        printf("%d ",*v);
        v++;
    }
}

int main()
{
    int v[100];
    int n,valor,i;
    printf("Tamanho do vetor:");
    scanf("%d",&n);
    printf("Valor para preencher:");
    scanf("%d",&valor);
    for(i=0;i<n;i++)
    {
        v[i]=valor;
    }
    imprimir(v,n);
    return 0;
}