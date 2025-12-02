#include <stdio.h>
#include <string.h>
void comparacao_string (char valor1[100],char valor2[100])
{
    char *p1,*p2;
    int contador=0;
    p1 = &valor1[0];
    p2 = &valor2[0];
    for(int i = 0; i < 100 ; i++)
    {
        if(*p1 == *p2) 
        {
            
            p2++;
        }
        if (*p2 == '\0')
        {
        contador++;
        }
        p1++;
    }
    if(contador>1)
    printf("string2 faz parte de string1\n");
}
int main()
{
    char string1[100],string2[100];
    scanf("%s",&string1[0]);
    scanf("%s",&string2[0]);
    comparacao_string(string1,string2);
}