
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main ()
{
     setlocale(LC_ALL, "Portuguese");
/*
Regra de negócio:Escreva um programa que leia dois números inteiros
e verifique se eles são iguais ou diferentes, exibindo uma mensagem
correspondente. Dica: Use os operadores == e !=.
*/

int n1, n2;    

printf("Digite o primeiro número: ");
scanf ("%d", &n1);
printf("Digite o segundo número: ");
scanf ("%d", &n2);

if (n1 == n2) {
     printf("Os números são iguais");
 } else {
     printf("Os números não são iguais");
 }

 return 0;
}