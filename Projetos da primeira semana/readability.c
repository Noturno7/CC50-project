//bibliotecas
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main (void)
{
    //input, asking the text.
    string texto = get_string("Texto: ");
    //adding some variables that we will use after
    int contador_letras = 0, contador_palavras = 0, contador_frases = 0;

    //loop for we count the number of letters in text
    for (int texto_l = 0; texto_l < strlen(texto); texto_l++)
    {
        int ascii_letras = texto[texto_l];

        if ((ascii_letras >= 65 && ascii_letras <= 90)||(ascii_letras >= 97 && ascii_letras <= 122))
        {
            contador_letras++;
        }
    }
int Número_de_letras = contador_letras ;

    //loop for we count the number of words in text
    for (int texto_p = 0; texto_p < strlen(texto); texto_p++)
    {
        int ascii_palavras = texto[texto_p];

        if (ascii_palavras == 32)
        {
            contador_palavras++;
        }
    }
int Número_de_palavras = contador_palavras + 1;

    //loop for we count the number of phrases in text
    for (int texto_f = 0; texto_f < strlen(texto); texto_f++)
    {
        if (texto[texto_f] == '!' || texto[texto_f] == '.' || texto[texto_f] == '?')
        {
            contador_frases++;
        }
    }
int Número_de_frases = contador_frases;

//making the variables for índice
float S = ((float)Número_de_frases / Número_de_palavras) * 100;
float L = ((float)Número_de_letras / Número_de_palavras) * 100;

float índice = (0.0588 * L - 0.296 * S - 15.8);

//formula for we round the final number(using math.h)
int índice_int = round(índice);

    if (índice_int >= 1)
{
    printf("Grade %d\n", índice_int);
}
else
{
    printf("Before Grade 1\n");
}
if (índice_int > 16)
{
    printf("Grade 16+\n");
}
}

//if ((caracteres_texto >= 65 && caracteres <= 90)||(caracteres >= 97 && caracteres <= 122))
//formula q vai ser utilizada  índice = 0,0588 * ascii - 0,296 * S - 15,8
