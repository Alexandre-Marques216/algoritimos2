#include <stdio.h>

int main()
{
    FILE*arq;
    int cod;
    char nome[50],end[50],fone[30];
    arq=fopen("Clientes.txt","a");
    if(arq==NULL)
    {
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    printf("codigo:");
    scanf("%d",&cod);
    printf("nome:");
    scanf("%s",nome);
    printf("endereco:");
    scanf("%s",end);
    printf("fone:");
    scanf("%s",fone);
    fprintf(arq,"%d %s %s %s\n",cod,nome,end,fone);
    fclose(arq);
    return 0;
}