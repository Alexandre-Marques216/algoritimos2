#include<stdio.h>
#include<stdlib.h>

int**mat_mult(int**A,int ra,int ca,int**B,int rb,int cb)
{
    int i,j,k;
    int**C;
    if(A==NULL||B==NULL||ca!=rb||ra<=0||ca<=0||cb<=0)
        return NULL;
    C=(int**)malloc(ra*sizeof(int*));
    if(C==NULL)
        return NULL;
    for(i=0;i<ra;i++)
    {
        C[i]=(int*)malloc(cb*sizeof(int));
        if(C[i]==NULL){for(j=0;j<i;j++)free(C[j]);free(C);return NULL;}
    }
    for(i=0;i<ra;i++)
    {
        for(j=0;j<cb;j++)
        {
            C[i][j]=0;    
            for(k=0;k<ca;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    return C;
}

int main()
{
    int ra,ca,rb,cb;
    int**A;int**B;int**C;
    printf("digite linhas e colunas de A:\n");
    scanf("%d%d",&ra,&ca);
    printf("digite linhas e colunas de B:\n");
    scanf("%d%d",&rb,&cb);
    if(ra<=0||ca<=0||rb<=0||cb<=0)
    {
        printf("dimensoes invalidas\n");
        return 0;
    }
    A=(int**)malloc(ra*sizeof(int*));
    if(A==NULL)
    {
        printf("falha alocacao\n");
        return 0;
    }
    for(int i=0;i<ra;i++)
    {
        A[i]=(int*)malloc(ca*sizeof(int));
        if(A[i]==NULL)
        {   
            for(int j=0;j<i;j++)
            {
                free(A[j]);
            }
        free(A);
        printf("falha alocacao\n");
        return 0;
        }
    }
    B=(int**)malloc(rb*sizeof(int*));
    if(B==NULL)
    {
        for(int i=0;i<ra;i++)
        {
            free(A[i]);
        }
        free(A);
        printf("falha alocacao\n");
        return 0;
    }
    for(int i=0;i<rb;i++)
    {
        B[i]=(int*)malloc(cb*sizeof(int));
        if(B[i]==NULL)
        {
            for(int j=0;j<i;j++)
            {
                free(B[j]);
            }
                for(i=0;i<ra;i++)
                {
                    free(A[i]);
                }
            free(A);
            free(B);
            printf("falha alocacao\n");
            return 0;
        }
    }
    for(int i=0;i<ra;i++)
    {
        for(int j=0;j<ca;j++)
        {
            printf("digite A[%d][%d]:\n",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<rb;i++)
    {
        for(int j=0;j<cb;j++)
        {
            printf("digite B[%d][%d]:\n",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    C=mat_mult(A,ra,ca,B,rb,cb);
    if(C==NULL)
    {
        printf("multiplicacao impossivel ou erro de alocacao\n");
        for(int i=0;i<ra;i++)
            free(A[i]);
        free(A);
        for(int i=0;i<rb;i++)
            free(B[i]);
        free(B);
        return 0;
    }
    printf("resultado da multiplicacao (linhas=%d,colunas=%d):\n",ra,cb);
    for(int i=0;i<ra;i++)
    {
        for(int j=0;j<cb;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<ra;i++)   
        free(A[i]);
    for(int i=0;i<rb;i++)
        free(B[i]);
    for(int i=0;i<ra;i++)
        free(C[i]);
    free(A);
    free(B);
    free(C);
    return 0;
}