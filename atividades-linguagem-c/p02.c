#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h> // Adicionada para usar fmod

int main() 
{
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o primeiro número:");
    float n1;
    scanf("%f", &n1);
    printf("Digite o segundo número:");
    float n2;
    scanf("%f", &n2);

    // Usando fmod para calcular o resto da divisão
    printf("O resto da divisão dos números é: %.2f\n", fmod(n1, n2));

    return 0;
}