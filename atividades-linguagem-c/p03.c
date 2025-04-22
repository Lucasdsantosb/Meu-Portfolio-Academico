#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    // Faça um programa que leia a base e a altura de um retângulo e calcule a área usando a fórmula:
    // Área = base * altura
    printf("Calculadora de área de um retângulo!\n");
    printf("Digite a base do retângulo: ");
    float baseRetangulo;
    scanf("%f", &baseRetangulo);
    printf("Digite a altura do retângulo: ");
    float altura;
    scanf("%f", &altura);
    printf("A área do retângulo é: %.2f\n", baseRetangulo * altura);

    return 0;
}