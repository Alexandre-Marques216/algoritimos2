#include <stdio.h>

int main()
{
    FILE*clientes;
    FILE*receb;
    clientes=fopen("Clientes.txt","w");
    receb=fopen("Recebimentos.txt","w");
    if(clientes==NULL||receb==NULL)
    {
        printf("erro ao alocar memoria\n");
        return 1;
    }
    fprintf(clientes,"Cod_Cli Nome Endereco Fone\n");
    fprintf(receb,"Num_doc Valor_doc Data_Emissao Data_Vencimento Cod_Cli\n");
    fclose(clientes);
    fclose(receb);
    printf("aquivos criados\n");
    return 0;
}