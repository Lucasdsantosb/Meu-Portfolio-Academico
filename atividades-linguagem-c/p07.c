#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main ()
{
     setlocale(LC_ALL, "Portuguese");
/*
Regra de negócio:Peça para o usuário digitar a sua idade
 e informe se ele é maior de idade (18 anos ou mais) ou 
menor de idade Dica: Use o operador >=.
*/
int idade;

printf("Qual é a sua idade? ");
scanf("%d", &idade);

 if (idade >=18)
 {
    printf("Você tem %d anos então você é maior de idade!", idade);
 }
 else {
    printf("Você tem %d anos então você é menor de idade!", idade);
 }
 return 0;
}