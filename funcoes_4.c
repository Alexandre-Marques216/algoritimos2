#include <stdio.h>
#include <math.h>
int baskara1(int valora,int valorb,int valorc)
{
    float delta,x1;
    delta= (pow(valorb,2)-(4*valora*valorc));
    x1 = -((valorb)+sqrt(delta))/(2*valora);

    return x1;
}
int baskara2(int valora,int valorb,int valorc)
{
    float delta,x2;
    delta= (pow(valorb,2)-(4*valora*valorc));
    x2 = -((valorb)-sqrt(delta))/(2*valora);

    return x2;
}
int main()
{
    int x1,x2,a,b,c;
    printf("digite o valor de a\n");
    scanf("%d",&a);
    printf("digite o valor de b\n");
    scanf("%d",&b);
    printf("digite o valor de c\n");
    scanf("%d",&c);

    x1 = baskara1(a,b,c);
    x2 = baskara2(a,b,c);
    printf("x1=%d,x2=%d\n",x1,x2);
}