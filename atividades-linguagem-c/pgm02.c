#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*soma, multiplicacao, subtracacao,
divisao, media aritmetica simples
e o resto da divis�o, e m�dia harmonica*/
int main()
{
	setlocale(LC_ALL,"portuguese");
	int n1,n2,soma,mul; //declara��o de variaveis 
	float rest,sub,div,media,mh;//declara��o de variaveis
	printf("Digite o 1� n�mero: ");
	scanf("%d",&n1);
	printf("Digite o 2� n�mero: ");
	scanf("%d",&n2);
	soma=n1 + n2;
	sub=n1 - n2;
	mul=n1 * n2;
	div = (float)n1 / n2;
    media = (float)(n1 + n2) / 2;
    rest = n1%n2;
    mh = (float)2.0/(1.0/n1+1.0/n2);
	printf("A soma dos n�meros �: %d\n",soma);
	printf("A subtra��o dos n�meros �: %d\n",sub);
	printf("A multiplicacao dos n�meros �: %d\n",mul);
	printf("A divisao dos n�meros �: %.1f\n",div);
	printf("A m�dia dos n�meros �: %.1f\n",media);
	printf("O resto da divis�o dos n�meros �: %.1f\n",rest);
	printf("A m�dia harmonica dos n�meros �: %.1f\n", mh);
}

