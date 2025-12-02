#include <stdio.h>

int main()
{
    FILE*rec;
    int doc,codCli;
    float valor,limite;
    char emissao[20],venc[20];
    printf("valor limite:");
    scanf("%f",&limite);
    rec=fopen("Recebimentos.txt","r");
    if(rec==NULL)
    {
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    while(fscanf(rec,"%d %f %s %s %d",&doc,&valor,emissao,venc,&codCli)!=EOF)
    {
        if(valor>limite)
        {
            printf("doc:%d valor:%.2f emissao:%s venc:%s codcli:%d\n",doc,valor,emissao,venc,codCli);
        }
    }
    fclose(rec);
    return 0;
}
