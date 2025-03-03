#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float dolar, real, conv;
	printf("Informe o valor em real a ser convertido: ");
	scanf("%f", &dolar);
	printf("Informe a cotação do dólar atual: ");
	scanf("%f", &real);
	
	conv = real / dolar;
	
	printf("O valor em dólar será U$ %.3f", conv);
return(0);
}