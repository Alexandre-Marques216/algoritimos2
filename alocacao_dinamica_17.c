#include<stdio.h>
#include<stdlib.h>

int*col_sum(int**a,int N)
{
    int*res;
    if(N<=0||a==NULL)
        return NULL;
    res=(int*)malloc(N*sizeof(int));
    if(res==NULL)
    return NULL;
    for(int j=0;j<N;j++)
    {
        res[j]=0;
        for(int i=0;i<N;i++)
            res[j]+=a[i][j];
        }
    return res;
}

int main()
{
    int N;
    int**a;
    int*res;
    printf("digite n para matriz nxn:\n");
    scanf("%d",&N);
    if(N<=0)
    {
        printf("n invalido\n");
        return 0;
    }
    a=(int**)malloc(N*sizeof(int*));
    if(a==NULL)
    {
        printf("falha alocacao\n");
        return 0;
    }
    for(int i=0;i<N;i++)
    {
        a[i]=(int*)malloc(N*sizeof(int));
        if(a[i]==NULL)
        {
            printf("falha alocacao\n");
            for(int j=0;j<i;j++)
            {
                free(a[j]);
            }
            free(a);
            return 0;}
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("digite a[%d][%d]:\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    res=col_sum(a,N);
    if(res==NULL)
    {
        printf("erro\n");
        for(int i=0;i<N;i++)
        {
            free(a[i]);
        }
        free(a);
        return 0;
    }
    printf("soma das colunas:\n");
    for(int i=0;i<N;i++)
        printf("%d ",res[i]);
    printf("\n");
    for(int i=0;i<N;i++)
        free(a[i]);
    free(a);
    free(res);
    return 0;
}