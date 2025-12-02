#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n= -1;
    printf("digite um numero inteiro positivo\n");
    while(n<=0)
    {
        scanf("%d",&n);
        getchar();
        if(n<=0)
        {
            printf("valor invalido tente novamente\n");
        }
    }
    int *v;
    v = (int*) calloc(n,sizeof(int));
    if(v == NULL)
    {
        printf("erro ao alocar a memoria\n");
    }
    int contador = 0; 
    while(contador<n)
    {
        printf("digite o valor da posição %d do vetor\n",contador);
        scanf("%d",&v[contador]);
        getchar();
        if(v[contador]<1)
        {
            printf("valor invalido tente novamente\n");
        }
        else 
        {
            contador++;
        }
    }
    printf("\n");
    for(int i=0;i<n;i++)
        {
            printf("%d\n",v[i]);
        }
    free(v);
    return 0;
}