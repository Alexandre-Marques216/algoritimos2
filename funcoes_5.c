#include <stdio.h>
void tempo(int valor1)
{
    int h=0,m=0;
    while (valor1>=60)
    {
        valor1=valor1 - 60;
        m++;
    }
    while(m>=60)
    {
        m= m - 60;
        h++;
    }
    printf("%d horas\n%d minutos\n%d segundos\n",h,m,valor1);
}
int main()
{
    int segundos;
    printf("digite a quantidade de segundos\n");
    scanf("%d",&segundos);
    tempo(segundos);
}