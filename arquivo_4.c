#include <stdio.h>

int main()
{
    FILE*cli;
    FILE*tmpCli;
    FILE*rec;
    FILE*tmpRec;
    int cod,codLido,codRec,doc;
    float valor;
    char nome[50],end[50],fone[30],emissao[20],venc[20];
    printf("codigo a excluir:");
    scanf("%d",&cod);
    cli=fopen("Clientes.txt","r");
    tmpCli=fopen("tmp_cli.txt","w");
    if(cli==NULL||tmpCli==NULL)
    {
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    while(fscanf(cli,"%d %s %s %s",&codLido,nome,end,fone)!=EOF)
    {
        if(codLido!=cod)
        {
            fprintf(tmpCli,"%d %s %s %s\n",codLido,nome,end,fone);
        }
    }
    fclose(cli);
    fclose(tmpCli);
    remove("Clientes.txt");
    rename("tmp_cli.txt","Clientes.txt");
    rec=fopen("Recebimentos.txt","r");
    tmpRec=fopen("tmp_rec.txt","w");
    if(rec==NULL||tmpRec==NULL)
    {
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    while(fscanf(rec,"%d %f %s %s %d",&doc,&valor,emissao,venc,&codRec)!=EOF)
    {
        if(codRec!=cod)
        {
            fprintf(tmpRec,"%d %.2f %s %s %d\n",doc,valor,emissao,venc,codRec);
        }
    }
    fclose(rec);
    fclose(tmpRec);
    remove("Recebimentos.txt");
    rename("tmp_rec.txt","Recebimentos.txt");
    return 0;
}
