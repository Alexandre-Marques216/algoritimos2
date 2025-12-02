#include <stdio.h>
#include <string.h>

int main()
{
    FILE*rec;
    FILE*cli;
    int doc,codCli,codBusca;
    float valor;
    char emissao[20],venc[20],ini[20],fim[20];
    char nome[50],end[50],fone[30];
    int atraso;
    printf("data inicial:");
    scanf("%s",ini);
    printf("data final:");
    scanf("%s",fim);
    rec=fopen("Recebimentos.txt","r");
    if(rec==NULL)
    {
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    while(fscanf(rec,"%d %f %s %s %d",&doc,&valor,emissao,venc,&codCli)!=EOF)
    {
        if(strcmp(venc,ini)>=0&&strcmp(venc,fim)<=0)
        {
            cli=fopen("Clientes.txt","r");
            if(cli==NULL)
            {
                printf("erro ao abrir arquivo\n");
                return 1;
            }
            while(fscanf(cli,"%d %s %s %s",&codBusca,nome,end,fone)!=EOF)
            {
                if(codBusca==codCli)
                {
                    printf("doc:%d valor:%.2f cliente:%s venc:%s\n",doc,valor,nome,venc);
                }
            }
            fclose(cli);
            printf("dias de atraso\n");
            scanf("%d",&atraso);
            printf("atraso:%d dias\n",atraso);
        }
    }
    fclose(rec);
    return 0;
}