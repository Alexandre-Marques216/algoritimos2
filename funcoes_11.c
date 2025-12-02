#include <stdio.h>
void media(float valor)
{
    if(valor<0 || valor>10)
        printf("valor invalido\n");
    else if(valor >= 0 && valor <= 4.9)
        printf("D\n");
    else if(valor >= 5 && valor <= 6.9)
        printf("C\n");
    else if(valor >= 7 && valor <= 8.9)
        printf("B\n");
    else if(valor >= 9 && valor <=10)
        printf("A\n");
}
int main()
{
    float numero;
    printf("digite um numero\n");
    scanf("%f",&numero);
    media(numero);
}