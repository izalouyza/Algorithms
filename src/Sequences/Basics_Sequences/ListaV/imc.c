#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float peso, altura, imc;
	printf("Informe seu peso: ");
	scanf("%f", &peso);
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	
	imc = peso / (altura*altura);
	
	printf("Seu IMC é %.2f", imc);
return(0);
}