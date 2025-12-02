#include <stdio.h>
void categoria(int valor)
{
    if(valor<5)
        printf("valor invalido\n");
    else if(valor>=5 && valor<=7)
        printf("infantil A\n");
    else if(valor >= 8 && valor <= 10)
        printf("infantil B\n");
    else if(valor >= 11 && valor <= 13)
        printf("Juvenil A\n");
    else if(valor >=14 && valor <=17)
        printf("Juvenil B\n");
    else if(valor >= 18)
        printf("Adulto\n");
}
int main(){
    int idade;
    printf("digite sua idade\n");
    scanf("%d",&idade);
    categoria(idade);
}