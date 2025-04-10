#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	int l1,l2,l3;
	
	printf("digite o lado 1: ");
	scanf("%d,",&l1);
	printf("digite o lado 2: ");
	scanf("%d,",&l2);
	printf("digite o lado 3: ");
	scanf("%d,",&l3);
	
	if (l1==l2 && l1==l3) {
	printf("EQUILÁTERO");
	}
	else if (l1 == l2 && l1 !=l3){
		printf("ISORCÉLES");
		}
		else {
			printf("ESCALENO");
		}
}
