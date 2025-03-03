//Crie uma função, sem retorno, que recebe um valor inteiro por parâmetro e informa se ele é positivo, negativo ou neutro.
#include<stdio.h>
#include<locale.h>

void teste(int n);

int main(){
	setlocale(LC_ALL, "portuguese");
	int v;
	printf("Digite um valor inteiro: ");
	scanf("%d", &v);
	teste(v);	
return(0);
}

void teste(int n){
	if (n>0){
		printf("%d é positivo", n);
	}
	else if(n<0){
		printf("%d é negativo", n);
	}
	else{
		printf("%d é neutro", n);
	}
}