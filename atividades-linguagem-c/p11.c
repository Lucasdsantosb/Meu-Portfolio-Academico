#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main ()
{
     setlocale(LC_ALL, "Portuguese");
/*
Área do Retângulo Regra de negócio: Escreva um programa
em linguagem C que leia a base e a altura de um retângulo
e calcule sua área.Fórmula da área do retângulo: 
área = base * altura
Exemplo de ENTRADA/SAIDA DADOS:
Digite a base do retângulo: 2
Digite a altura do retângulo: 5
A área do retângulo é: 10
*/
int base, altura, area;
printf("digite a base do retangulo: ");
scanf("%d", &base);
printf("digite a altura do retangulo: ");
scanf("%d", &altura);
area = base * altura;
printf("a area do triangulo é: %d", area);





return 0;
}