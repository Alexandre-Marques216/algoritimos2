#include <stdio.h>
void anos_dias(int valor1,int valor2,int valor3)
{
    int bissextos;
    bissextos = valor1/4;
    valor1 = valor1 * 365;
    valor3 = valor1 + valor3;
    valor2 = valor2 * 30;
    valor3 = valor3 + valor2;
    valor3 = valor3 + bissextos;
    printf("%d\n",valor3);
}
int main()
{
    int ano,mes,dia;
    printf("digite o ano em que voce nasceu\n");
    scanf("%d",&ano);
    printf("digite o mes em que voce nasceu\n");
    scanf("%d",&mes);
    printf("digite o dia em que voce nasceu\n");
    scanf("%d",&dia);
    anos_dias(ano,mes,dia);
}