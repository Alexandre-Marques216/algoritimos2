#include <stdio.h>

int main()
{
    FILE*arq;
    arq=fopen("PRODUTOS.txt","w");
    if(arq==NULL)
    {
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    fprintf(arq,"codigo Descricao Preco\n");
    fclose(arq);
    printf("arquivo criado\n");
    return 0;
}
