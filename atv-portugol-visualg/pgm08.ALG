Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 31/03/2025
Var
// Se��o de Declara��es das vari�veis 
TF,TP,TA: INTEIRO
PF,PP: REAL
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
ESCREVA("Digite o total de faltas: ")
LEIA(TF)
ESCREVA("Digite o total de presen�a: ")
LEIA(TP)
TA <- TF+TP
PF <- TF/TA
PP <- TP/TA
ESCREVA("O percentual de faltas foi de:",PF)
ESCREVA("O percentual de presen�a foi de:",PP)
Fimalgoritmo