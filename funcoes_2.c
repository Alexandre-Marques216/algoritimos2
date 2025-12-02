#include <stdio.h>

void mostrar(char*t)
{
    printf("%s",t);
}

int main()
{
    char txt[100];
    printf("digite o texto\n");
    scanf("%s",txt);
    mostrar(txt);
    return 0;
}