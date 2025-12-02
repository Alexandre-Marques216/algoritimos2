#include <stdio.h>

struct Hora
{
    int h;
    int m;
    int s;
};

int main()
{
    struct Hora v[5];
    struct Hora maior;
    int i;
    for(i=0;i<5;i++)
    {
        printf("hora\n");
        scanf("%d",&v[i].h);
        printf("minuto\n");
        scanf("%d",&v[i].m);
        printf("segundo\n");
        scanf("%d",&v[i].s);
    }
    maior=v[0];
    for(i=1;i<5;i++)
    {
        if(v[i].h>maior.h||(v[i].h==maior.h&&v[i].m>maior.m)||(v[i].h==maior.h&&v[i].m==maior.m&&v[i].s>maior.s))
        {
            maior=v[i];
        }
    }
    printf("%d:%d:%d\n",maior.h,maior.m,maior.s);
    return 0;
}