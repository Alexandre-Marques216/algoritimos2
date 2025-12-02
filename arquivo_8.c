#include <stdio.h>

int main()
{
    FILE*rec;
    int codCli,codLido,doc;
    float valor;
    char emissao[20],venc[20];
    printf("codigo do cliente:");
    scanf("%d",&codCli);
    rec=fopen("Recebimentos.txt","r");
    if(rec==NULL)
    {
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    while(fscanf(rec,"%d %f %s %s %d",&doc,&valor,emissao,venc,&codLido)!=EOF)
    {
        if(codLido==codCli)
        {
            printf("doc:%d valor:%.2f emissao:%s venc:%s\n",doc,valor,emissao,venc);
        }
    }
    fclose(rec);
    return 0;
}
