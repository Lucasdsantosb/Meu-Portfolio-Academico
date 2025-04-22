#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main ()
{
     setlocale(LC_ALL, "Portuguese");
/*
//Classificação por Idade
Regra de negócio: Crie um programa em C que solicite
ao usuário o nome, sobrenome e idade. Em seguida, o
programa deve exibir os dados informados e indicar se
o usuário é jovem (idade < 25) ou experiente (idade ≥ 25)
*/

int idade;
char nome[50],sobrenome[50];

printf("Digite o seu nome: ");
scanf("%s", nome);
printf("Digite seu sobrenome: ");
scanf("%s", sobrenome);
printf("Digite sua idade: ");
scanf("%d", &idade);
 if (idade < 25) {
     printf("Olá %s %s, você tem %d anos então você é jovem!", nome, sobrenome, idade);
}else{
     printf("Olá %s %s, você tem %d anos então você é experiente", nome , sobrenome, idade);
}
 




return 0;
}