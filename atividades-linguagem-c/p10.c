#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main ()
{
     setlocale(LC_ALL, "Portuguese");
/*
//Área do Quadrado Regra de negócio: Escreva um 
programa em linguagem C que leia o valor do lado
de um quadrado e calcule sua área.Fórmula da área
do quadrado: área = lado * lado 
Exemplo de ENTRADA/SAIDA DADOS:
Digite o valor do lado do quadrado: 5
A área do quadrado é: 25
*/

int lado, area;
printf("digite o valor do lado do quadrado: ");
scanf("%d", &lado);
area = lado * lado;
printf("o valor da area do quadrado é: %d", area);





return 0;
}