#include <stdio.h>

int main()
{
    FILE*arq;
    FILE*tmp;
    int cod;
    float preco,min,max,desc;
    char nome[50],c1[20],c2[20],c3[20];
    printf("valor minimo:");
    scanf("%f",&min);
    printf("valor maximo:");
    scanf("%f",&max);
    printf("percentual de desconto:");
    scanf("%f",&desc);
    desc=desc/100;
    arq=fopen("PRODUTOS.txt","r");
    tmp=fopen("TMP.txt","w");
    if(arq==NULL||tmp==NULL)
    {
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    fscanf(arq,"%s %s %s",c1,c2,c3);
    fprintf(tmp,"%s %s %s\n",c1,c2,c3);
    while(fscanf(arq,"%d %s %f",&cod,nome,&preco)!=EOF)
    {
        if(preco>=min&&preco<=max)
        {
            preco=preco*(1-desc);
        }
        fprintf(tmp,"%d %s %.2f\n",cod,nome,preco);
    }
    fclose(arq);
    fclose(tmp);
    remove("PRODUTOS.txt");
    rename("TMP.txt","PRODUTOS.txt");
    return 0;
}