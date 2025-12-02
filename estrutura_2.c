#include <stdio.h>
#include <math.h>
int main()
{
    struct ponto
    {
        float x,y;
    };
    float res = 0,sup = 0;
    struct ponto ponto1;
        printf("digite um valor para o ponto x\n");
        scanf("%f",&ponto1.x);
        printf("digite um valor para o ponto y\n");
        scanf("%f",&ponto1.y);
    ponto1.x = pow(ponto1.x,2);
    ponto1.y = pow(ponto1.y,2);
    sup = ponto1.x +ponto1.y;
    res = sqrt(sup);
    printf("a distancia do ponto ate a origem e:%.2f\n",res);  
}