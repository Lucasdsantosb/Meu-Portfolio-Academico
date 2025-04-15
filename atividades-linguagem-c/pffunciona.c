#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int n1, n2, soma, mul;
    float sub, div;

    printf("Digite o 1º número: ");
    scanf("%d", &n1);
    printf("Digite o 2º número: ");
    scanf("%d", &n2);

    soma = n1 + n2;
    sub = n1 - n2;
    mul = n1 * n2;
    div = (float)n1 / n2;

    printf("A soma dos números é: %d\n", soma);
    printf("A subtração dos números é: %.1f\n", sub);
    printf("A multiplicação dos números é: %d\n", mul);
    printf("A divisão dos números é: %.1f\n", div);

    return 0;
}