#include <stdio.h>
int main()
{
    int b=4,c=5;
    int *p1;
    int *p2;
    p1 = &c;
    p2 = &b;
    if(&p1 > &p2)
        printf("o endereco de p1 e maior que o endereco de p2\n (p1:%p)",p1);
    else if(&p2 > &p1)
        printf("o endereco de p2 e maior que o endereco de p1\n (p2:%p)",p2);
}