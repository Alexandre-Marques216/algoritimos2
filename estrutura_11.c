#include<stdio.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
}data;

int dias_mes(int m,int a)
{
    int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(m==2&&(a%400==0||(a%4==0&&a%100!=0)))
        return 29;
    return d[m-1];
}

long converte(data x)
{
    long t=x.ano*365+x.dia;
    for(int i=1;i<x.mes;i++)t+=dias_mes(i,x.ano);
        t+=x.ano/4-x.ano/100+x.ano/400;
    return t;
}

int main()
{
    data d1,d2;
    long t1,t2,res;
    printf("digite a primeira data (dd mm aaaa):\n");
    scanf("%d%d%d",&d1.dia,&d1.mes,&d1.ano);
    printf("digite a segunda data (dd mm aaaa):\n");
    scanf("%d%d%d",&d2.dia,&d2.mes,&d2.ano);
    t1=converte(d1);
    t2=converte(d2);
    res=labs(t2-t1);
    printf("dias decorridos entre as duas datas: %ld\n",res);
    return 0;
}
