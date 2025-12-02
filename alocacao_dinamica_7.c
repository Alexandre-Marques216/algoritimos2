#include <stdio.h>
#include <stdlib.h>

int* criar_vetor(int n)
{
    int *vetor;
    vetor = (int*) calloc(n,sizeof(int));
    if(vetor == NULL)
    {
        printf("erro ao alocar memoria\n");
        return NULL;
    }
    for(int i=0;i<n;i++)
    {
        vetor[i]=i;
    }
    return vetor;
}

int main()
{
    int n;
    printf("digite um valor inteiro positivo\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("valor invalido");
        return 1;
    }
    else
    {
        int *v;
        v = criar_vetor(n);
        printf("\n");
        for(int i=0;i<n;i++)
        {
            printf("%d\n",v[i]);
        }
        free(v);
        return 0;
    }
}