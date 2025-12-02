#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("digite dois valor inteiro positivo");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("valor 1 invalido\n");
        return 1;
    }
    scanf("%d",&m);
    if(m<=0)
    {
        printf("valor 2 invalido\n");
        return 1;
    }
    int **matriz;
    matriz = (int**) calloc(n,sizeof(int*));
    if(matriz == NULL)
    {
        printf("erro ao alocar a memoria\n");
        return 1;
    }
    for(int i=0;i<n;i++)
    {
        matriz[i] = (int*)calloc(m,sizeof(int));
        if(matriz[i] == NULL)
        {
            printf("erro ao alocar a memoria\n");
            return 1;
        }
        for(int j=0;j<m;j++)
        {
            printf("digite um valor inteiro para posicao (%d,%d)\n",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    free(matriz);
    return 0;
}