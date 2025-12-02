#include <stdio.h>
void triangulo(float valor1,float valor2,float valor3)
{
    if(valor1<(valor2+valor3) && valor2<(valor1+valor3) && valor3<(valor1+valor2))
        {
    
        if(valor1==valor2 && valor2 == valor3)
            printf("triangulo equilatero\n");

        if((valor1 < valor2 && valor2 == valor3) || (valor2 < valor1 && valor1 == valor3) || (valor3 < valor2 && valor2 == valor1))
            printf("tirangulo issosceles\n");

        if(valor1 != valor2 && valor1 != valor3 && valor3 != valor2)
            printf("triangulo escaleno\n");
        }
    else
        printf("valor invalido");

}
int main()
{
    int a,b,c;
    printf("digite o tamanho da lateral do triangulo\n");
    scanf("%d",&a);
    printf("digite o tamanho da lateral do triangulo\n");
    scanf("%d",&b);
    printf("digite o tamanho da lateral do triangulo\n");
    scanf("%d",&c);
    triangulo(a,b,c);
}