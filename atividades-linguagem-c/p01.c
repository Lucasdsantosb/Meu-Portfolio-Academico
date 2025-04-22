#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main ( ) 
{
setlocale(LC_ALL, "Portuguese");
/* Faça um programa que leia dois números inteiros e faça
as operações de soma, subtração, multiplicação e divisão entre eles.*/

printf("Calculadora simples!\n");
printf("Digite o primeiro número: ");
int n1;
scanf("%d", &n1);
printf("Digite o segundo número: ");
int n2;
scanf("%d", &n2);
printf("A soma dos numeros é: %d\n", n1 + n2);
printf("A subtração dos numeros é: %d\n", n1 - n2);
printf("A multiplicação dos numeros é: %d\n", n1 * n2);
printf("A divisão dos numeros é: %d\n", n1 / n2);

}