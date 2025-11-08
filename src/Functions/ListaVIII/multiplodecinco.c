//Construa uma função, sem retorno, que recebe um valor inteiro por parâmetro e informa se ele é, ou não, múltiplo de 5.
#include<stdio.h>
#include<locale.h>

void multiplo(int n);

int main(){
	setlocale(LC_ALL, "portuguese");
	int v;
	printf("Informe um valor: ");
	scanf("%d", &v);
	multiplo(v);
return(0);
}

void multiplo(int n){
	if (n%5==0){
		printf("%d é múltiplo de 5.", n);
	}
	else{
		printf("%d não é múltiplo de 5.", n);
	}
}