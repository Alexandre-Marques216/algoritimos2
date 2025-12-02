#include <stdio.h>
#include <stdlib.h>

struct Cadastro
{
    char nome[50];
    int idade;
    char end[80];
};

struct Cadastro*criarVetor(int n)
{
    struct Cadastro*v;
    v=(struct Cadastro*)malloc(n*sizeof(struct Cadastro));
    if(v==NULL)
    {
        printf("erro ao alocar memoria\n");
        return NULL;
    }
    for(int i=0;i<n;i++)
    {
        printf("nome:");
        scanf("%s",v[i].nome);
        printf("idade:");
        scanf("%d",&v[i].idade);
        printf("endereco:");
        scanf("%s",v[i].end);
    }
    return v;
}

int main()
{
    struct Cadastro*v;
    int n;
    printf("tamanho:");
    scanf("%d",&n);
    v=criarVetor(n);
    for(int i=0;i<n;i++)
    {
        printf("%s %d %s\n",v[i].nome,v[i].idade,v[i].end);
    }
    free(v);
    return 0;
}