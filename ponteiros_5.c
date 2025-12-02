#include <stdio.h>
int main()
{
    int *p1;
    int vetor[5];
    p1 = &vetor[0];
    for(int i = 0;i< 5; i++)
    {
        scanf("%d",p1);
        p1++;
    }
    p1 = p1 - 5;
    for(int i = 0; i < 5; i++ )
    {
    *p1 *= 2;
    printf("%d\n", *p1);
    p1++;
    }
}