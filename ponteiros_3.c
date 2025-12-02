#include <stdio.h>
int main()
{
    float vetor[10];
    float *p1;
    for(int i = 0; i < 10;i++)
    {
        printf("digite um valor inteiro\n");
        scanf("%f",&vetor[i]);
    }
    p1 = &vetor[0];
    for(int i = 0; i < 10; i++)
        {
            printf("%d:%p\n",i+1,p1);
            p1++;
        }
}