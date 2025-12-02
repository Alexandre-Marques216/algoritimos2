#include <stdio.h>
float media(int valor1)
{
    float vetor[valor1],resultado=0;
    printf("digite os valores para tirar a media\n");
    for(int i = 0;i<valor1;i++)
        scanf("%f",&vetor[i]);
    for(int i = 0;i<valor1;i++)
        resultado = resultado + vetor[i];
    resultado = resultado/valor1;
    return resultado;
}
int main()
{
    float resultado,n;
    printf("digite a quantidade de numeros desejados\n");
    scanf("%f",&n);
    resultado = media(n);
    printf("%.2f\n",resultado);
}