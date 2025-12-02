#include <stdio.h>

int main()
{
    FILE*arq;
    FILE*tmp;
    int cod,codAtual;
    char nome[50],end[50],fone[30];
    printf("codigo a alterar:");
    scanf("%d",&cod);
    arq=fopen("Clientes.txt","r");
    tmp=fopen("tmp.txt","w");
    if(arq==NULL||tmp==NULL)
    {
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    while(fscanf(arq,"%d %s %s %s",&codAtual,nome,end,fone)!=EOF)
    {
        if(codAtual==cod)
        {
            printf("novo nome:");
            scanf("%s",nome);
            printf("novo endereco:");
            scanf("%s",end);
            printf("novo fone:");
            scanf("%s",fone);
        }
        fprintf(tmp,"%d %s %s %s\n",codAtual,nome,end,fone);
    }
    fclose(arq);
    fclose(tmp);
    remove("Clientes.txt");
    rename("tmp.txt","Clientes.txt");
    return 0;
}
