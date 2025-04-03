//pergunte ao usuario e idade e mostre na tela
#include<stdio.h> //biblioteca de entrada e saída
#include<stdlib.h>//biblioteca de funções
#include<locale.h>//biblioteca de idioma
 int main (){
 	int idade; //variavel de idade
	setlocale(LC_ALL,"portuguese");// idioma portugues
	printf("Qual é a sua idade:"); //mensagem na tela perguntando a idade do usuario
		scanf("%d",&idade); //lê a idade do usuario
	printf("Sua idade é:%d ",idade); // mensagem mostrando a idade do usuario
 }
