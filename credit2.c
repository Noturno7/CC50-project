#include <stdio.h>
#include <cs50.h>

//Avisando o compilador da existencia das funções

int desmember_number(int number);
int typeOfCard(int sizeOfNumber, long cardNumber);

int main(void)
{

    //recebendo o input do usuario

    long crediCard = get_long("Digite o numero do cartão: ");

    //criando uma variavel copia, para utilizar posteriormente

    long crediCardCopy = crediCard;

    int count=0, mod, numberOfDigits=0, mod_sum=0, product_sum=0, cardIdentifier;

    //obtendo os digitos pares da direita para esquerda

    while(crediCard>0)
    {

        if(count==1){
            mod = (crediCard%10)*2;
            crediCard /= 10;

            //chamada da função para desmembrar o resultado e somar a variavel;

            mod_sum += desmember_number(mod);
            count=0;
        }
        else
        {
            //obtendo os numeros que não estavam na sequencia

            product_sum += crediCard % 10;
            crediCard /= 10;
            count++;
        }

        //obtendo o total de digitos do cartao

        numberOfDigits += 1;

    }

    //soma dos produtos com os digitos que não estavam na sequencia

    product_sum += mod_sum;

    //obtendo o numero identificador do cartão

    cardIdentifier = typeOfCard(numberOfDigits, crediCardCopy);

    //condicional para verificar se o cartão é valido e qual é o tipo do cartao

    if(product_sum % 10 == 0)
    {
        if(cardIdentifier == 34 || cardIdentifier == 37)
        {
            printf("AmericanExpress\n");
        }
        else if(cardIdentifier > 50 && cardIdentifier <= 55)
        {
            printf("MasterCard\n");
        }
        else
        {
            printf("Visa\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

}

int desmember_number(int number)
{

    int mod = 0;

    while(number>0)
    {

        mod += number % 10;
        number /= 10;

    }

    return mod;

}

int typeOfCard(int sizeOfNumber, long cardNumber)
{

    int cardIdentifier;

    for(int i = 1; i <= sizeOfNumber; i++)
    {

        if(i == sizeOfNumber-1)
        {

            cardIdentifier = cardNumber % 10;
            cardNumber /= 10;

        }
        else if(i == sizeOfNumber)
        {

            cardIdentifier += (cardNumber % 10) * 10;
            cardNumber /= 10;

        }
        else{

            cardNumber /= 10;

        }

    }

    return cardIdentifier;

}
