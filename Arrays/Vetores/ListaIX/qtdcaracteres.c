#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	char nome[40], i, cont;
	printf("Digite um nome: ");
	gets(nome);	
	for (i=0; i<nome[i]; i++){
		cont++;
	}
	printf("\nO nome tem %d caracteres.", cont);
return(0);
}