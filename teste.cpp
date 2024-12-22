#include <stdio.h>

/*
Calcular média de 3 unidades
*/

float uni1=0, uni2=0, uni3=0, media=0;

int main()
{

printf("Digite o valor da nota primeira unidade: ");
scanf("%f", &uni1);

printf("Digite o valor da nota segunda unidade: ");
scanf("%f", &uni2);

printf("Digite o valor da nota terceira unidade: ");
scanf("%f", &uni3);

media = (uni1 + uni2 + uni3) / 3;

printf("Sua media e de: %.2f, ", media);
if(media > 6)
{
    printf("Aluno Aprovado !!");
} else 
{
    printf("Aluno Reprovado !!, editado aqui!, agora editado pelo vscode");
}
}
