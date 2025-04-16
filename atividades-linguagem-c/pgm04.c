#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//ler a base e a altura de um retangulo e calcular a area
 int main(){
 setlocale(LC_ALL,"portuguese");

  int base,altura,area; //declaração de variaveis                
    //declaração de variaveis
printf("Digite a base do retangulo: ");
scanf("%d",&base);
printf("Digite a altura do retangulo: ");
scanf("%d",&altura);
area=base*altura; //calculo da area
printf("A area do retangulo é: %d\n",area); //impressao do resultado

return 0;


 }