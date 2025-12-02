#include <stdio.h>
int main()
{
    float matriz[3][3];
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            printf("digite um valor para posicao (%d,%d)",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            printf("%.2f ",matriz[i][j]);
        }
    printf("\n");
    }
    float *p1;
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            p1 = &matriz[i][j];
            printf("%p ",p1);
        }
    printf("\n");
    }
}