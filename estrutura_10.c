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
    atleta a[5],aux;
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
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[j].idade>a[i].idade)
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
    printf("lista de atletas do mais velho para o mais novo:\n");
    for(int i=0;i<5;i++)
    {
        printf("%s-%d\n",a[i].nome,a[i].idade);
    }
    return 0;
}
