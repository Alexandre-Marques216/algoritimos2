#include<stdio.h>
#include<stdlib.h>

int*mat_vec_prod(int**a,int*n,int N)
{
    int*res;
    if(N<=0||a==NULL||n==NULL)
        return NULL;
    res=(int*)malloc(N*sizeof(int));
    if(res==NULL)
        return NULL;
    for(int i=0;i<N;i++)
    {
        res[i]=0;
        for(int j=0;j<N;j++)
            res[i]+=a[i][j]*n[j];
    }
    return res;
}

int main()
{
    int N,i,j;
    int**a;
    int*b,*c;
    printf("digite n para matriz nxn e vetor n:\n");
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
    for(i=0;i<N;i++)
    {
        a[i]=(int*)malloc(N*sizeof(int));
        if(a[i]==NULL)
        {
            printf("falha alocacao\n");
            for(j=0;j<i;j++)
            {
                free(a[j]);
            }
            ree(a);
            return 0;
        }
    }
    b=(int*)malloc(N*sizeof(int));
    if(b==NULL)
    {
        printf("falha alocacao\n");
        for(i=0;i<N;i++)
        {
            free(a[i]);
        }
        free(a);
        return 0;
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("digite a[%d][%d]:\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<N;i++)
    {
        printf("digite b[%d]:\n",i);
        scanf("%d",&b[i]);
    }
    c=mat_vec_prod(a,b,N);
    if(c==NULL)
    {
        printf("erro gerando resultado\n");
        for(i=0;i<N;i++)
        {
            free(a[i]);
        }
            free(a);
            free(b);
            return 0;
    }
    printf("vetor resultado:\n");
    for(i=0;i<N;i++)
        printf("%d ",c[i]);
    printf("\n");
    for(i=0;i<N;i++)
        free(a[i]);
    free(a);
    free(b);
    free(c);
    return 0;
}