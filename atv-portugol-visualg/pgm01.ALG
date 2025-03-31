Algoritmo "semnome"
//LER 2 NUMEROS CALCULAR MEDIA ARITMETICA
// SEM MEDIA FOR MAIOR OU IGUAL QUE 7 SERÁ APROVADO CASO CONTRARIO REPROVADO
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : LUCAS DOS SANTOS BEZERRA
// Data atual  : 26/03/2025
Var
   // Seção de Declarações das variáveis
   N1, N2 : INTEIRO
   MA : REAL
   NOME : CARACTERE
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   ESCREVA ("DIGITE SEU NOME : ")
   LEIA (NOME)
   ESCREVA ("DIGITE O PRIMEIRO NUMERO : ")
   LEIA (N1)
   ESCREVA ("DIGITE O SEGUNDO NUMERO : ")
   LEIA (N2)
   MA:=(N1+N2)/2
   SE (MA >= 7) ENTAO
      ESCREVA ("CARO ALUNO ", NOME," SUA MEDIA FOI ",MA, " LOGO, APROVADO")
   SENAO
      ESCREVA ("CARO ALUNO ", NOME," SUA MEDIA FOI ",MA, " LOGO, REPROVADO")
   FIMSE
Fimalgoritmo