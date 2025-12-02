#include <stdio.h>

int main()
{
    FILE*arq;
    FILE*tmp;
    int cod;
    float preco;
    char desc[50],c1[20],c2[20],c3[20];
    arq=fopen("PRODUTOS.txt","r");
    tmp=fopen("TMP.txt","w");
    if(arq==NULL||tmp==NULL)
    {
        printf("Erro\n");
        return 1;
    }
    fscanf(arq,"%s %s %s",c1,c2,c3);
    fprintf(tmp,"%s %s %s\n",c1,c2,c3);
    while(fscanf(arq,"%d %s %f",&cod,desc,&preco)!=EOF)
    {
        preco=preco*1.15;
        fprintf(tmp,"%d %s %.2f\n",cod,desc,preco);
    }
    fclose(arq);
    fclose(tmp);
    remove("PRODUTOS.txt");
    rename("TMP.txt","PRODUTOS.txt");
    return 0;
}