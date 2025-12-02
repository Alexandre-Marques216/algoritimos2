#include <stdio.h>
int main()
{
    int  vetor[5];
    int *p1;
    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&vetor[i]);
    }
    printf("\n");
    p1 = &vetor[0];
    for(int i = 0; i < 5;i++)
    {
        if(*p1 % 2 == 0)
        {
            printf("%d\n",*p1);
        }
        p1++;
    }
}