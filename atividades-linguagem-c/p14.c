#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int numero;
    
    printf("digite o numero a ser analisado");
    scanf("%d" &numero);
    if (numero > 0)
    {
        printf("positivo");
    }
    elseif (numero < 0){
        printf("negativo");

    }
    else{
        printf("zero");
    }
    return 0;b
    }