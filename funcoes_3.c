#include <stdio.h>

char*mostrar2(char*t)
{
    printf("%s",t);
    return "Ok";
}

int main()
{
    char txt[100];
    char*resp;
    printf("digite o texto\n");
    scanf("%s",txt);
    resp=mostrar2(txt);
    printf("\n%s",resp);
    return 0;
}