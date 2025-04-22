#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main ()
{
     setlocale(LC_ALL, "Portuguese");

/*Operações com Dois Números
Regra de negócio:
Leia dois números inteiros do usuário e calcule:
O quadrado do primeiro número
O dobro do segundo número
A soma entre eles
A diferença entre o maior e o menor
*/

int n1, n2, quadrado, dobro, soma, diferenca;

printf("Digite os dois números desejados: ");
scanf("%d %d", &n1, &n2);

quadrado = n1 * n1;
dobro = n2 * 2;
soma = n1 + n2;
if (n1 > n2) {
     diferenca = n1 - n2;
     } else {
     diferenca = n2 - n1;

printf("O quadrado do primeiro número é: %d\n", quadrado);
printf("O dobro do segundo número é: %d\n", dobro);
printf("A soma entre eles é: %d\n", soma);
printf("A diferença entre o maior e o menor é: %d\n", diferenca);
     }

     
     printf("Fim do programa!\n");

     
     if (quadrado == 0 && dobro == 0 && soma == 0 && diferenca == 0) {
          return 1;
     } else {
          printf("Operações realizadas com sucesso!\n");
          
          

return 0;
     }









     
}