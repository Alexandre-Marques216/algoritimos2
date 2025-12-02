#include<stdio.h>
#include<stdlib.h>

int*cria_vetor_valor(int n,int val)
{
    int*vet;
    if(n<=0)
        return NULL;
    vet=(int*)malloc(n*sizeof(int));
    if(vet==NULL)
        return NULL;
    for(int i=0;i<n;i++)
        vet[i]=val;
    return vet;
}

int main()
{
    int n,v;
    int*res;
    printf("digite n e o valor para preencher o vetor:\n");
    scanf("%d%d",&n,&v);
    res=cria_vetor_valor(n,v);
    if(res==NULL)
    {
        printf("vetor nao alocado ou n invalido\n");
        return 0;
    }
    printf("vetor gerado:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",res[i]);
    }
    printf("\n");
    free(res);
    return 0;
}