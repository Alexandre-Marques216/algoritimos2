#include <stdio.h>
#include <string.h>
int main()
{
    struct aluno
    {
        int matricula;
        char nome[100];
        int notas[3];
    };
    struct aluno alunos[5];
    for(int i=0; i<5;i++)
    {
        printf("digite a matricula do aluno\n");
        scanf("%d",alunos[i].matricula);
        printf("digite o nome do aluno");
        scanf("%s",alunos[i].nome);
        for(int j = 0; j < 3;j++)
        {
            printf("digite a %d nota\n",i+1);
            scanf("%d",alunos[i].notas[j]);
        }
    }

    for(int i=0; i<5;i++)
    {
        printf("%d\n",alunos[i].matricula);
        printf("%s\n",alunos[i].nome);
        for(int j = 0; j < 3;j++)
        {
            printf("%d\n",alunos[i].notas[j]);
        }
        printf("\n");
    }
}