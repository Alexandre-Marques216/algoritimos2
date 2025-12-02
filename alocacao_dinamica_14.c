#include<stdio.h>
#include<stdlib.h>

int*vet_soma(int*a,int*b,int n)
{
    int*c;
    if(n<=0||a==NULL||b==NULL)
        return NULL;
    c=(int*)malloc(n*sizeof(int));
    if(c==NULL)
        return NULL;
    for(int i=0;i<n;i++)
        c[i]=a[i]+b[i];
    return c;
}

int main()
{
    int n;
    int*a,*b,*c;
    printf("digite n para vetores a e b:\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("n invalido\n");
        return 0;
    }
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(n*sizeof(int));
    if(a==NULL||b==NULL)
    {
        printf("falha alocacao\n");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        printf("digite a[%d]:\n",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("digite b[%d]:\n",i);
        scanf("%d",&b[i]);
    }
    c=vet_soma(a,b,n);
    if(c==NULL)
    {
        printf("erro ao criar vetor resultado\n");
        free(a);
        free(b);
        return 0;
    }
    printf("vetor soma:\n");
    for(int i=0;i<n;i++)
    printf("%d ",c[i]);
    printf("\n");
    free(a);
    free(b);
    free(c);
    return 0;
}