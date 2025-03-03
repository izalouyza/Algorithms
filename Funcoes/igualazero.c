//Implemente uma função, sem retorno, que recebe um valor inteiro por parâmetro e informa se é, ou não, igual a zero.
#include<stdio.h>
#include<locale.h>

void valor(int n);

int main(){
	setlocale(LC_ALL, "portuguese");
	int v;
	printf("Digite um valor inteiro: ");
	scanf("%d", &v);
	valor(v);
return(0);
}

void valor(int n){
	if (n==0){
		printf("0 é igual a zero.");
	}
	else{
		printf("Não é igual a zero.");
	}
}