//Faça uma função, sem retorno, que recebe um valor inteiro por parâmetro, verifica e informa se tal número é par ou ímpar.
#include<stdio.h>
#include<locale.h>

void  parimpar(int n);

int main(){
	setlocale(LC_ALL, "portuguese");
	int v;
	printf("Digite um número: ");
	scanf("%d", &v);
	parimpar(v);
return(0);
}

void parimpar(int n){
	if (n%2==0){
		printf("%d é par.", n);
	}else{
		printf("%d é ímpar.", n);
	}
}