#include<stdio.h>
#include<locale.h>
int main (void) {

setlocale(LC_ALL,"portuguese");
int cont,tabuada;

printf("Qual a tabuada você deseja? \n");
scanf("%d",&tabuada);

for(cont=0;cont<=10;cont++){
printf("%d x %d = %d \n",tabuada,cont,tabuada*cont);
}
 

}