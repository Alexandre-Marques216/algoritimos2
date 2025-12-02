#include <stdio.h>

int main()
{
    FILE*rec;
    int doc,codCli;
    float valor,min,max;
    char emissao[20],venc[20];
    printf("valor minimo:");
    scanf("%f",&min);
    printf("valor maximo:");
    scanf("%f",&max);
    rec=fopen("Recebimentos.txt","r");
    if(rec==NULL)
    {
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    while(fscanf(rec,"%d %f %s %s %d",&doc,&valor,emissao,venc,&codCli)!=EOF)
    {
        if(valor>=min&&valor<=max)
        {
            printf("doc:%d valor:%.2f emissao:%s venc:%s codCli:%d\n",doc,valor,emissao,venc,codCli);
        }
    }
    fclose(rec);
    return 0;
}