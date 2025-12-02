#include <stdio.h>
#include <string.h>

int main()
{
    FILE*arqEstacao;
    FILE*arqEstilista;
    FILE*arqRoupa;
    int op;
    int codEstacao,codEstacaoLido;
    int codEstilista,codEstilistaLido;
    int codRoupa,ano;
    char nomeEstacao[50],nomeEstilista[50],descRoupa[50];
    while(1)
    {
        printf("1-Cadastrar estacao\n2-Cadastrar estilista\n3-Cadastrar roupa\n4-Relatorio por estacao\n5-Sair\nOpcao:");
        scanf("%d",&op);
        if(op==1)
        {
            arqEstacao=fopen("Estacao.txt","a");
            if(arqEstacao==NULL)
            {
                printf("Erro\n");return 1;
            }
            printf("codigo da estacao:");
            scanf("%d",&codEstacao);
            printf("nome da estacao:");
            scanf("%s",nomeEstacao);
            fprintf(arqEstacao,"%d %s\n",codEstacao,nomeEstacao);
            fclose(arqEstacao);
        }
        if(op==2)
        {
            arqEstilista=fopen("Estilista.txt","a");
            if(arqEstilista==NULL)
            {
                printf("erro ao abrir arquivo\n");return 1;
            }
            printf("codigo do estilista:");
            scanf("%d",&codEstilista);
            printf("nome do estilista:");
            scanf("%s",nomeEstilista);
            printf("salario:");
            scanf("%d",&ano);
            fprintf(arqEstilista,"%d %s %d\n",codEstilista,nomeEstilista,ano);
            fclose(arqEstilista);
        }
        if(op==3)
        {
            arqEstilista=fopen("Estilista.txt","r");
            arqEstacao=fopen("Estacao.txt","r");
            if(arqEstilista==NULL||arqEstacao==NULL)
            {
                printf("erro ao abrir arquivo\n");
                return 1;
            }
            printf("codigo do estilista da roupa:");
            scanf("%d",&codEstilista);
            printf("codigo da estacao da roupa:");
            scanf("%d",&codEstacao);
            int okE=0;
            int okS=0;
            while(fscanf(arqEstilista,"%d %s %d",&codEstilistaLido,nomeEstilista,&ano)!=EOF)
            {
                if(codEstilistaLido==codEstilista){okE=1;}
            }
            while(fscanf(arqEstacao,"%d %s",&codEstacaoLido,nomeEstacao)!=EOF)
            {
                if(codEstacaoLido==codEstacao){okS=1;}
            }
            fclose(arqEstilista);
            fclose(arqEstacao);
            if(okE==0||okS==0)
            {
                printf("estacao ou estilista inexistente\n");
                continue;
            }
            arqRoupa=fopen("Roupa.txt","a");
            if(arqRoupa==NULL)
            {
                printf("erro ao abrir arquivo\n");
                return 1;
            }
            printf("cdigo da roupa:");
            scanf("%d",&codRoupa);
            printf("descricao:");
            scanf("%s",descRoupa);
            printf("ano:");
            scanf("%d",&ano);
            fprintf(arqRoupa,"%d %s %d %d %d\n",codRoupa,descRoupa,codEstilista,codEstacao,ano);
            fclose(arqRoupa);
        }
        if(op==4)
        {
            printf("codigo da estacao:");
            scanf("%d",&codEstacao);
            arqRoupa=fopen("Roupa.txt","r");
            arqEstilista=fopen("Estilista.txt","r");
            if(arqRoupa==NULL||arqEstilista==NULL)
            {
                printf("erro ao abrir arquivo\n");
                return 1;
            }
            printf("roupas da estacao %d:\n",codEstacao);
            while(fscanf(arqRoupa,"%d %s %d %d %d",&codRoupa,descRoupa,&codEstilista,&codEstacaoLido,&ano)!=EOF)
            {
                if(codEstacaoLido==codEstacao)
                {
                    rewind(arqEstilista);
                    while(fscanf(arqEstilista,"%d %s %d",&codEstilistaLido,nomeEstilista,&ano)!=EOF)
                    {
                        if(codEstilistaLido==codEstilista)
                        {
                            printf("roupa:%s estilista:%s ano:%d\n",descRoupa,nomeEstilista,ano);
                        }
                    }
                }
            }
            fclose(arqRoupa);
            fclose(arqEstilista);
        }
        if(op==5)
        {
            return 0;
        }
    }
}