#include <stdio.h>
#include <stdlib.h>

int*criarVetor(int n)
{
    int*v;
    if(n<=0)
    {
        return NULL;
    }
    v=(int*)malloc(n*sizeof(int));
    return v;
}

int main()
{
    int*n;
    int t;
    printf("tamanho:");
    scanf("%d",&t);
    n=criarVetor(t);
    if(n==NULL)
    {
        printf("ponteiro nulo\n");
        return 0;
    }
    for(int i=0;i<t;i++)
    {
        n[i]=i;
        printf("%d ",n[i]);
    }
    free(n);
    return 0;
}