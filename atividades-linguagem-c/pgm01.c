//pergunte ao usuario e idade e mostre na tela
#include<stdio.h> //biblioteca de entrada e sa�da
#include<stdlib.h>//biblioteca de fun��es
#include<locale.h>//biblioteca de idioma
 int main (){
 	int idade; //variavel de idade
	setlocale(LC_ALL,"portuguese");// idioma portugues
	printf("Qual � a sua idade:"); //mensagem na tela perguntando a idade do usuario
		scanf("%d",&idade); //l� a idade do usuario
	printf("Sua idade �:%d ",idade); // mensagem mostrando a idade do usuario
 }
