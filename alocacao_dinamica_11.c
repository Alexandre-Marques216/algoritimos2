#include<stdio.h>
#include<stdlib.h>

int**identidade(int n)
{
    int**m;
    if(n<=0)
        return NULL;
    m=(int**)malloc(n*sizeof(int*));
    if(m==NULL)
        return NULL;
    for(int i=0;i<n;i++)
    {
        m[i]=(int*)malloc(n*sizeof(int));
        if(m[i]==NULL)
        {
            for(int j=0;j<i;j++)
                free(m[j]);
                free(m);
                return NULL;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            m[i][j]=(i==j)?1:0;
        }
    }
    return m;
}

int main()
{
    int n;
    int**m;
    printf("digite n para matriz identidade nxn:\n");
    scanf("%d",&n);
    m=identidade(n);
    if(m==NULL)
    {
        printf("nao foi possivel alocar matriz\n");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",m[i][j]);
            
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
        free(m[i]);
    free(m);
    return 0;
}