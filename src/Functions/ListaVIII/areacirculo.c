//Elabore uma função, com retorno, que calcula a área de um círculo.
#include<stdio.h>
#include<locale.h>
#define pi 3.14

float area(float r);

int main(){
	setlocale(LC_ALL, "portuguese");
	float a, r;
	printf("Digite o valor do raio: ");
	scanf("%f", &r);
	a = area(r);
	printf("Área = %.1f", a);
return(0);
}

float area(float r){
	return (pi * (r*r));
}

