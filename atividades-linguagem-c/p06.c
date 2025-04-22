
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main ()
{
     setlocale(LC_ALL, "Portuguese");
/*
Maior ou menor de dois valores Regra de negócio:
Leia dois números do usuário e informe qual deles
 é o maior ou se são iguais.Dica: Use os operadores >, < e ==
*/
int n1,n2;

printf("Digite os dois numeros desejados: ");
scanf("%d %d", &n1, &n2);

if (n1 > n2)
{
     printf("%d e maior que %d", n1, n2);

}
else if (n1 < n2)
{
     printf("%d e menor que %d", n1, n2);
}
else 
{
     printf("%d e igual a %d", n1, n2);
}



return 0;
}