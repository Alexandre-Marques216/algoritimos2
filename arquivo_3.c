#include <stdio.h>

int main()
{
    FILE*cli;
    FILE*rec;
    int codCli,codLido,doc;
    float valor;
    char emissao[20],venc[20],nome[50],end[50],fone[30];
    int achou=0;
    printf("codigo do cliente:");
    scanf("%d",&codCli);
    cli=fopen("Clientes.txt","r");
    if(cli==NULL)
    {
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    while(fscanf(cli,"%d %s %s %s",&codLido,nome,end,fone)!=EOF)
    {
        if(codLido==codCli)
        {
            achou=1;
        }
    }
    fclose(cli);
    if(achou==0)
    {
        printf("cliente nao encontrado\n");
        return 0;
    }
    rec=fopen("Recebimentos.txt","a");
    if(rec==NULL)
    {
        printf("Erro\n");
        return 1;
    }
    printf("numero do documento:");
    scanf("%d",&doc);
    printf("valor:");
    scanf("%f",&valor);
    printf("data emissao:");
    scanf("%s",emissao);
    printf("data vencimento:");
    scanf("%s",venc);
    fprintf(rec,"%d %.2f %s %s %d\n",doc,valor,emissao,venc,codCli);
    fclose(rec);
    return 0;
}