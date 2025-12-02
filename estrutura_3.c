#include <stdio.h>
#include <math.h>
int main()
{
    struct ponto
    {
        float x;
        float y;
    };
    float res = 0 , sup1 = 0, sup2 = 0 ;
    struct ponto ponto1,ponto2;
    printf("x1\n");
    scanf("%f",&ponto1.x);
    printf("y1\n");
    scanf("%f",&ponto1.y);
    printf("x2\n");
    scanf("%f",&ponto2.x);
    printf("y1\n");
    scanf("%f",&ponto2.y);
    sup1 = ponto1.x - ponto2.x;
    sup2 = ponto1.y - ponto2.y;
    sup1 = pow(sup1,2);
    sup2 = pow(sup2,2);
    res = sqrt((sup1+sup2));
    printf("a distancia dos dois pontos e:%.2f\n",res);
}

