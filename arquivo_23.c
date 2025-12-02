#include <stdio.h>

int main()
{
    FILE*arq;
    int cod;
    float preco,min,max;
    char desc[50],c1[20],c2[20],c3[20];
    char letra;
    printf("letra inicial:");
    scanf(" %c",&letra);
    printf("valor minimo:");
    scanf("%f",&min);
    printf("valor maximo:");
    scanf("%f",&max);
    arq=fopen("PRODUTOS.txt","r");
    if(arq==NULL)
    {
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    fscanf(arq,"%s %s %s",c1,c2,c3);
    while(fscanf(arq,"%d %s %f",&cod,desc,&preco)!=EOF)
    {
        if(desc[0]==letra&&preco>=min&&preco<=max)
        {
            printf("cod:%d desc:%s preco:%.2f\n",cod,desc,preco);
        }
    }
    fclose(arq);
    return 0;
}