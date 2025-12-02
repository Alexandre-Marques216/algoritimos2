#include <stdio.h>

int main()
{
    FILE*rec;
    FILE*tmp;
    int docBusca,codBusca,doc,codCli;
    float valor;
    char emissao[20],venc[20];
    printf("numero do documento:");
    scanf("%d",&docBusca);
    printf("codigo do cliente:");
    scanf("%d",&codBusca);
    rec=fopen("Recebimentos.txt","r");
    tmp=fopen("tmp_rec.txt","w");
    if(rec==NULL||tmp==NULL)
    {
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    while(fscanf(rec,"%d %f %s %s %d",&doc,&valor,emissao,venc,&codCli)!=EOF)
    {
        if(doc==docBusca&&codCli==codBusca)
        {
            printf("novo valor:");
            scanf("%f",&valor);
            printf("nova emissao:");
            scanf("%s",emissao);
            printf("novo vencimento:");
            scanf("%s",venc);
        }
        fprintf(tmp,"%d %.2f %s %s %d\n",doc,valor,emissao,venc,codCli);
    }
    fclose(rec);
    fclose(tmp);
    remove("Recebimentos.txt");
    rename("tmp_rec.txt","Recebimentos.txt");
    return 0;
}