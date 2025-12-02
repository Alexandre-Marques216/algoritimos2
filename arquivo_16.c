#include <stdio.h>

int main()
{
    FILE*arq;
    int cod,codLido;
    float preco;
    char desc[50],cab1[20],cab2[20],cab3[20];
    int existe=0;
    printf("codigo:");
    scanf("%d",&cod);
    arq=fopen("PRODUTOS.txt","r");
    if(arq==NULL)
    {
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    fscanf(arq,"%s %s %s",cab1,cab2,cab3);
    while(fscanf(arq,"%d %s %f",&codLido,desc,&preco)!=EOF)
    {
        if(codLido==cod)
        {
            existe=1;
        }
    }
    fclose(arq);
    if(existe==1)
    {
        printf("codigo ja existe\n");
        return 0;
    }
    printf("descricao:");
    scanf("%s",desc);
    printf("preco:");
    scanf("%f",&preco);
    arq=fopen("PRODUTOS.txt","a");
    if(arq==NULL)
    {
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    fprintf(arq,"%d %s %.2f\n",cod,desc,preco);
    fclose(arq);
    return 0;
}