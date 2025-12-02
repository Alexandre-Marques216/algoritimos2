#include <stdio.h>

void preencher(int*v,int n,int valor)
{
    int*fim;
    fim=v+n;
    while(v<fim)
    {
        *v=valor;
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
    preencher(v,n,valor);
    for(i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }
    return 0;
}