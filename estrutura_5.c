#include <stdio.h>

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
    struct Ponto p;
    printf("x superior esquerdo:");
    scanf("%f",&r.sup.x);
    printf("y superior esquerdo:");
    scanf("%f",&r.sup.y);
    printf("x inferior direito:");
    scanf("%f",&r.inf.x);
    printf("y inferior direito:");
    scanf("%f",&r.inf.y);
    printf("x do ponto:");
    scanf("%f",&p.x);
    printf("y do ponto:");
    scanf("%f",&p.y);
    if(p.x>=r.sup.x&&p.x<=r.inf.x&&p.y<=r.sup.y&&p.y>=r.inf.y)
    {
        printf("Dentro\n");
    }
    else
    {
        printf("Fora\n");
    }
    return 0;
}