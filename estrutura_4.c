#include <stdio.h>
#include <math.h>

struct Ponto
{
    float x;
    float y;
};

struct Retangulo
{
    struct Ponto sup;
    struct Ponto inf;
};

int main()
{
    struct Retangulo r;
    float largura,altura,area,diag,peri;
    printf("X superior esquerdo:");
    scanf("%f",&r.sup.x);
    printf("Y superior esquerdo:");
    scanf("%f",&r.sup.y);
    printf("X inferior direito:");
    scanf("%f",&r.inf.x);
    printf("Y inferior direito:");
    scanf("%f",&r.inf.y);
    largura=r.inf.x-r.sup.x;
    altura=r.sup.y-r.inf.y;
    area=largura*altura;
    diag=sqrt(largura*largura+altura*altura);
    peri=2*(largura+altura);
    printf("Area:%.2f\n",area);
    printf("Diagonal:%.2f\n",diag);
    printf("Perimetro:%.2f\n",peri);
    return 0;
}
