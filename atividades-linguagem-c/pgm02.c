#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*soma, multiplicacao, subtracacao,
divisao, media aritmetica simples
e o resto da divisão, e média harmonica*/
int main()
{
	setlocale(LC_ALL,"portuguese");
	int n1,n2,soma,mul; //declaração de variaveis 
	float rest,sub,div,media,mh;//declaração de variaveis
	printf("Digite o 1º número: ");
	scanf("%d",&n1);
	printf("Digite o 2º número: ");
	scanf("%d",&n2);
	soma=n1 + n2;
	sub=n1 - n2;
	mul=n1 * n2;
	div = (float)n1 / n2;
    media = (float)(n1 + n2) / 2;
    rest = n1%n2;
    mh = (float)2.0/(1.0/n1+1.0/n2);
	printf("A soma dos números é: %d\n",soma);
	printf("A subtração dos números é: %d\n",sub);
	printf("A multiplicacao dos números é: %d\n",mul);
	printf("A divisao dos números é: %.1f\n",div);
	printf("A média dos números é: %.1f\n",media);
	printf("O resto da divisão dos números é: %.1f\n",rest);
	printf("A média harmonica dos números é: %.1f\n", mh);
}

