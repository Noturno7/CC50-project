// incluindo as bibliotecas, OBS: biblioteca math.h utilizada na linha 19:
#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // criando as variaveis, tanto a do troco total quanto as das moedas que vão ser utilizadas:
    float troco;
    int moedas, moedas25, moedas10, moedas5, moedas1;
    moedas25 = 0, moedas10 = 0, moedas5 = 0, moedas1 = 0;

    do
    {
        // utilizamos o float aqui pois o número pedido pode ser com casas decimais, e não um inteiro como no int.
        troco = get_float("qual é o troco?\n");
    }
    // para garantir que não virá números negativos
    while (troco < 0);
    //convertendo em centavos
    troco = (troco * 100);

    // Linha21-Linha29= Condição para que tire 25 centavos até que não possa tirar mais, no caso o número seja menor que 25 centavos
    if (troco >= 25)
        do
        {
            troco = troco - 25;
            moedas25++;
        }
        while (troco >= 25);
    printf("o número de moedas de 25 centavos é %i\n", moedas25);

    // Linha33-Linha39= Condição para que tire 10 centavos até que não possa tirar mais, no caso o número seja menor que 10 centavos.
    if (troco >= 10)
        do
        {
            troco = troco - 10;
            moedas10++;
        }
        while (troco >= 10);
    printf("o número de moedas de 10 centavos é %i\n", moedas10);

    // linha43-Linha49= Condição para que tire 5 centavos até que não possa tirar mais, no caso o número seja maior que 5 centavos.
    if (troco >= 5)
        do
        {
            troco = troco - 5;
            moedas5++;
        }
        while (troco >= 5);
    printf("o número de moedas de 5 centavos é %i\n", moedas5);

    // Linha53-Linha60= Condição para que tire 1 centavo até que não possa tirar mais, no caso o número seja maior que um.
    if (troco >= 1)
        do
        {
            troco = troco - 1;
            moedas1++;
        }
        while (troco >= 1);
    printf("o número de moedas de 5 centavos é %i\n", moedas1);
//fazendo commit para o github
    // Agora juntamos tudo e imprimimos o número total de moedas
    int moedasT;
    moedasT = moedas1 + moedas10 + moedas25 + moedas5;
    printf("o número total de moedas é %i\n", moedasT);
}
