#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main ()
{
     setlocale(LC_ALL, "Portuguese");

/*
Faixa de valores Regra de negócio: Leia um número inteiro
e verifique se ele está na faixa entre 10 e 50 (inclusive).
Exiba uma mensagem dizendo se está dentro ou fora da faixa.
Dica: Use >=, <= e o operador lógico &&.
*/     
int numero;

printf("digite o numero: ");
scanf("%d", &numero);
if (numero >=10 && numero <=50)
{
     printf("Seu numero está dentro da caixa!");
}
else{
     printf("Seu numero está fora da caixa!");
}

return 0;
}