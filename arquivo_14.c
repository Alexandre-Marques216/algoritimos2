#include <stdio.h>

int main()
{
    FILE*arq;
    int op;
    int numero;
    char nome[50];
    float n1,n2,media;
    while(1)
    {
        printf("1-criar\n2-incluir\n3-sair\nopcao:");
        scanf("%d",&op);
        if(op==1)
        {
            arq=fopen("Notas.txt","w");
            if(arq==NULL){printf("Erro\n");return 1;}
            fprintf(arq,"numero nome nota1 nota2\n");
            fclose(arq);
        }
        if(op==2)
        {
            arq=fopen("Notas.txt","a");
            if(arq==NULL)
            {
                printf("erro ao abrir arquivo\n");
                return 1;
            }
            printf("numero:");
            scanf("%d",&numero);
            printf("nome:");
            scanf("%s",nome);
            printf("nota1:");
            scanf("%f",&n1);
            printf("nota2:");
            scanf("%f",&n2);
            fprintf(arq,"%d %s %.2f %.2f\n",numero,nome,n1,n2);
            fclose(arq);
            arq=fopen("Notas.txt","r");
            if(arq==NULL)
            {
                printf("erro ao abrir arquivo\n");
                return 1;
            }
            printf("registros cadastrados:\n");
            fscanf(arq,"%s %s %s %s",nome,nome,nome,nome);
            while(fscanf(arq,"%d %s %f %f",&numero,nome,&n1,&n2)!=EOF)
            {
                media=(n1+n2)/2;
                printf("%d %s %.2f %.2f Media:%.2f\n",numero,nome,n1,n2,media);
            }
            fclose(arq);
        }
        if(op==3)
        {
            return 0;
        }
    }
}