Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 31/03/2025
Var
// Se��o de Declara��es das vari�veis 
contaDeAgua,tarifaDeAgua,tarifaDeEsgoto : real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
  escreva("Informe a tarifa de �gua: ")
leia(tarifaDeAgua)
tarifaDeEsgoto <- (80*tarifaDeAgua)/100
contaDeAgua <- tarifaDeAgua + tarifaDeEsgoto
escreva("O valor da conta a ser pago �: ",contaDeAgua)
Fimalgoritmo