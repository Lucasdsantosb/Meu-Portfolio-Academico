//pergunte ao usuario e idade e mostre na tela
#include<stdio.h> //biblioteca de entrada e sa�da
#include<stdlib.h>//biblioteca de fun��es
#include<locale.h>//biblioteca de idioma
 int main (){
 	int idade; //variavel de idade
 	float altura; //declarando variavel de altura
 	char nome[20];
 	
	setlocale(LC_ALL,"portuguese");// idioma portugues
	
	printf("Qual � a sua idade:"); //mensagem na tela perguntando a idade do usuario
	scanf("%d",&idade); //l� a idade do usuario
	printf("Qual � a sua altura:"); //mensagem na tela perguntando a altura do usuario
	scanf("%f" ,&altura); // l� a altura do usuario
	printf("Qual � o seu nome? ");//mensagem na tela perguntando o nome do usuario
	scanf("%s", &nome);//l� o nome do usuario
	printf("Sua idade �: %d anos e sua altura � %.2f, seu nome � %s " ,idade,altura,nome); // mensagem mostrando a idade, a altura e o nome do usuario
	if (idade>18) //impoe a condi��o de que se idade for maior do que 18
		printf(", Voc� � adulto"); //se for maior de 18 aparece a mensagem voc� � adulto
	 else  //caso seja menor de 18
		printf(", Voc� � jovem");//se for menor de 18 aparece a mensagem voc� � jovem
		
	
	
}
