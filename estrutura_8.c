#include <stdio.h>
#include <string.h>

typedef struct 
{
    int dia; 
    int mes;
    int ano;
} Data;

typedef struct
{
    char nome[50];
    Data nasc;
} Pessoa;

int velha(Data valor1, Data valor2) 
{
    if (valor1.ano!=valor2.ano) 
        return valor1.ano<valor2.ano;
    if (valor1.mes!=valor2.mes) 
        return valor1.mes<valor2.mes;
    return valor1.dia<valor2.dia;
}

int nova(Data valor1, Data valor2) 
{
    if (valor1.ano=valor2.ano) 
        return valor1.ano>valor2.ano;
    if (valor1.mes!=valor2.mes)
        return valor1.mes>valor2.mes;
        return valor1.dia>valor2.dia;
}

int main() 
{
    Pessoa pessoas[6];
    int i, p1 = 0, p2 = 0;
    for (i = 0; i < 6; i++) 
    {
        printf("pessoa:%d\n",i+1);
        printf("nome\n");
        scanf(" %[^\n]",pessoas[i].nome);
        printf("data de nascimento dd mm aaaa:\n");
        scanf("%d",&pessoas[i].nasc.dia);
        scanf("%d",&pessoas[i].nasc.mes);
        scanf("%d",&pessoas[i].nasc.ano);
    }
    for (i = 1; i < 6; i++) 
    {
        if (velha(pessoas[i].nasc,pessoas[p1].nasc))
            p1 = i;
        if (nova(pessoas[i].nasc,pessoas[p2].nasc))
            p2=i;
    }
    printf("\npessoa mais velha: %s\n",pessoas[p1].nome);
    printf("pessoa mais nova: %s\n",pessoas[p2].nome);
    return 0;
}
