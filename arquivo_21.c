#include <stdio.h>

int main()
{
    FILE*arq;
    FILE*tmp;
    int cod,codLido;
    float preco;
    char desc[50],c1[20],c2[20],c3[20];
    printf("codigo a excluir:");
    scanf("%d",&cod);
    arq=fopen("PRODUTOS.txt","r");
    tmp=fopen("TMP.txt","w");
    if(arq==NULL||tmp==NULL)
    {
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    fscanf(arq,"%s %s %s",c1,c2,c3);
    fprintf(tmp,"%s %s %s\n",c1,c2,c3);
    while(fscanf(arq,"%d %s %f",&codLido,desc,&preco)!=EOF)
    {
        if(codLido!=cod)
        {
            fprintf(tmp,"%d %s %.2f\n",codLido,desc,preco);
        }
    }
    fclose(arq);
    fclose(tmp);
    remove("PRODUTOS.txt");
    rename("TMP.txt","PRODUTOS.txt");
    return 0;
}