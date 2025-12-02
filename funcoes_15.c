#include <stdio.h>
int potencia(int valor1,int valor2)
{
    int base =valor1;
    for(int i=1;i<valor2;i++)
        {
        base = base *valor1; 
        }
    return base;
}
int main()
{
    int pot,v1,v2;
    printf("digite um valor inteiro\n");
    scanf("%d",&v1);
    printf("digite um valor inteiro para se a potencia\n");
    scanf("%d",&v2);
    pot = potencia(v1,v2);
    printf("%d\n",pot);
}