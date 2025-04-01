Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 31/03/2025
Var
// Seção de Declarações das variáveis 
contaDeAgua,tarifaDeAgua,tarifaDeEsgoto : real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
  escreva("Informe a tarifa de água: ")
leia(tarifaDeAgua)
tarifaDeEsgoto <- (80*tarifaDeAgua)/100
contaDeAgua <- tarifaDeAgua + tarifaDeEsgoto
escreva("O valor da conta a ser pago é: ",contaDeAgua)
Fimalgoritmo