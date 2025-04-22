#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main ()
{
     setlocale(LC_ALL, "Portuguese");
/*
//Ano bissexto (simplificado)
Regra de negócio: Peça ao usuário para digitar um ano
e verifique se ele é divisível por 4. Se for, diga que
pode ser um ano bissexto, caso contrário, diga que não é.
Dica: Use o operador % (resto) junto com ==
*/
int ano;
printf("Verificador de ano\n");
printf("Digite o ano: ");
scanf("%d", &ano);

if (ano %4 == 0)
{
     printf("o ano e bissexto");
}
else
{
     printf("o ano nao e bissexto");
}





return 0;
}