#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char*inverter(char*s)
{
    int i,j,t;
    char*r;
    t=strlen(s);
    r=(char*)malloc((t+1)*sizeof(char));
    for(i=0,j=t-1;j>=0;i++,j--)
    {
        r[i]=s[j];
    }
    r[t]='\0';
    return r;
}

int main()
{
    char s[100];
    char*r;
    printf("digite uma string:\n");
    scanf(" %[^\n]",s);
    r=inverter(s);
    printf("string invertida:%s\n",r);
    free(r);
    return 0;
}