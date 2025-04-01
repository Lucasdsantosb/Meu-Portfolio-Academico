Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 31/03/2025
Var
// Seção de Declarações das variáveis 
TF,TP,TA: INTEIRO
PF,PP: REAL
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
ESCREVA("Digite o total de faltas: ")
LEIA(TF)
ESCREVA("Digite o total de presença: ")
LEIA(TP)
TA <- TF+TP
PF <- TF/TA
PP <- TP/TA
ESCREVA("O percentual de faltas foi de:",PF)
ESCREVA("O percentual de presença foi de:",PP)
Fimalgoritmo