Algoritmo "semnome"
//LER 2 NUMEROS CALCULAR MEDIA ARITMETICA
// SEM MEDIA FOR MAIOR OU IGUAL QUE 7 SER� APROVADO CASO CONTRARIO REPROVADO
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : LUCAS DOS SANTOS BEZERRA
// Data atual  : 26/03/2025
Var
   // Se��o de Declara��es das vari�veis
   N1, N2 : INTEIRO
   MA : REAL
   NOME : CARACTERE
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...

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