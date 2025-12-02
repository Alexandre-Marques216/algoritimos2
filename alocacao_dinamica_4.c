#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("digite a quantidade de caracteres no vetor\n");
    scanf("%d",&n);
    int *vetor;
    vetor = (int *) calloc(n,sizeof(int));
    if(vetor == NULL)
    {
        printf("erro ao alocar a memoria");
    }
    for(int i =0;i<n;i++)
    {
        printf("digite um valor inteiro para o vetor\n");
        scanf("%d",&vetor[i]);
    }
    printf("\n");
    for(int i =0;i<n;i++)
    {
        printf("%d\n",vetor[i]);
    }   
    printf("\n");
    free(vetor);
    return 0;
}