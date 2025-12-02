#include <stdio.h>
#include <string.h>
int main()
{
    struct aluno
    {
        char nome[100];
        int idade;
        char endereco[100];
    };
    struct aluno aluno1;
    strcpy(aluno1.nome , "alexandre marques");
    aluno1.idade = 19;
    strcpy(aluno1.endereco , "fagundes varela, 2643");
    printf("%s",aluno1.nome);
    printf("%d",aluno1.idade);
    printf("%s",aluno1.endereco);
}