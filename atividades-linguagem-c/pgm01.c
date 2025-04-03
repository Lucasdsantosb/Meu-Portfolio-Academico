//pergunte ao usuario e idade e mostre na tela
#include<stdio.h> //biblioteca de entrada e saída
#include<stdlib.h>//biblioteca de funções
#include<locale.h>//biblioteca de idioma
 int main (){
 	int idade; //variavel de idade
 	float altura; //declarando variavel de altura
 	char nome[20];
 	
	setlocale(LC_ALL,"portuguese");// idioma portugues
	
	printf("Qual é a sua idade:"); //mensagem na tela perguntando a idade do usuario
	scanf("%d",&idade); //lê a idade do usuario
	printf("Qual é a sua altura:"); //mensagem na tela perguntando a altura do usuario
	scanf("%f" ,&altura); // lê a altura do usuario
	printf("Qual é o seu nome? ");//mensagem na tela perguntando o nome do usuario
	scanf("%s", &nome);//lê o nome do usuario
	printf("Sua idade é: %d anos e sua altura é %.2f, seu nome é %s " ,idade,altura,nome); // mensagem mostrando a idade, a altura e o nome do usuario
	if (idade>18) //impoe a condição de que se idade for maior do que 18
		printf(", Você é adulto"); //se for maior de 18 aparece a mensagem você é adulto
	 else  //caso seja menor de 18
		printf(", Você é jovem");//se for menor de 18 aparece a mensagem você é jovem
		
	
	
}
