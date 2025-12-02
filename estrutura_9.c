#include<stdio.h>
typedef struct
{
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
}atleta;
int main()
{
    atleta a[5];
    int mai,mal;
    mai=0;
    mal=0;
    for(int i=0;i<5;i++)
    {
        printf("digite o nome do atleta %d:\n",i+1);
        scanf(" %[^\n]",a[i].nome);
        printf("digite o esporte do atleta %d:\n",i+1);
        scanf(" %[^\n]",a[i].esporte);
        printf("digite a idade do atleta %d:\n",i+1);
        scanf("%d",&a[i].idade);
        printf("digite a altura do atleta %d:\n",i+1);
        scanf("%f",&a[i].altura);
    }
    for(int i=1;i<5;i++)
    {
        if(a[i].altura>a[mai].altura)mai=i;
        if(a[i].idade>a[mal].idade)mal=i;
    }
    printf("atleta mais alto: %s\n",a[mai].nome);
    printf("atleta mais velho: %s\n",a[mal].nome);
    return 0;
}
