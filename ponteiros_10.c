#include<stdio.h>
int main()
{
    int a;
    int *b;
    int **c;
    int ***d;
    int dobro,triplo,quad;
    printf("digite um valor inteiro:\n");
    scanf("%d",&a);
    b=&a;
    c=&b;
    d=&c;
    dobro=(*b)*2;
    triplo=(**c)*3;
    quad=(***d)*4;
    printf("dobro:%d\n",dobro);
    printf("triplo:%d\n",triplo);
    printf("quadruplo:%d\n",quad);
    return 0;
}