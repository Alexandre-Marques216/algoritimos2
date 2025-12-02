#include <stdio.h>

int main()
{
    FILE*est;
    FILE*roupa;
    FILE*estacao;
    est=fopen("Estilista.txt","w");
    roupa=fopen("Roupa.txt","w");
    estacao=fopen("Estacao.txt","w");
    if(est==NULL||roupa==NULL||estacao==NULL)
    {
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    fprintf(est,"codEstilista nome salario\n");
    fprintf(roupa,"codroupa descricao codestilista codestacao ano\n");
    fprintf(estacao,"codEstacao nome\n");
    fclose(est);
    fclose(roupa);
    fclose(estacao);
    printf("arquivos criados\n");
    return 0;
}