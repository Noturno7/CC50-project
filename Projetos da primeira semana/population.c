#include <cs50.h>
#include <stdio.h>

int main(void)

{
    // variaveis
    int startSize, endSize, anos = 0, ganhoAnual, percaAnual, lhamas = 0;

    // Loop para verificar se o usuário vai injetar um número correto.
    do
    {
    startSize = get_int("Start size: ");
    endSize = get_int("End size: ");

    // Loop para gerar uma mensagem de erro caso o usuário injetar um valor incorreto.
    if (startSize < 9 || endSize < startSize){
        printf("Número inválido.\n");
    }

    }
    while (startSize < 9 || endSize < startSize);

    // Loop do calculo de ganho e perca de lhamas anuais.
    ganhoAnual = startSize;
    for (anos = 0; lhamas < endSize; anos++)
    {
        lhamas = ganhoAnual  + ((ganhoAnual / 3) - (ganhoAnual / 4));
        printf("Lhamas no %iº ano = %i \n ", anos + 1,lhamas);
        ganhoAnual = lhamas;
    }
    // Impressão dos anos necessários.
    printf("anos necessários = %i \n", anos);
}
// n2 = n1 + (n1 / 3) - (n1 / 4);
