#include <stdio.h>

int main()
{
    FILE*arq;
    int cod;
    float preco;
    char desc[50],c1[20],c2[20],c3[20];
    arq=fopen("PRODUTOS.txt","r");
    if(arq==NULL)
    {
        printf("erro\n");
        return 1;
    }
    fscanf(arq,"%s %s %s",c1,c2,c3);
    while(fscanf(arq,"%d %s %f",&cod,desc,&preco)!=EOF)
    {
        if(preco>500)
        {
            printf("cod:%d desc:%s preco:%.2f\n",cod,desc,preco);
        }
    }
    fclose(arq);
    return 0;
}