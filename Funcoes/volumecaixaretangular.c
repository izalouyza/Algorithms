//Faça uma função, com retorno, para calcular o volume de uma caixa retangular
#include<stdio.h>
#include<locale.h>

float volume(float c, float l, float a);

int main(){
	setlocale(LC_ALL, "portuguese");
	float vol, comprimento, largura, altura;
	printf("Digite o comprimento, a largura e a altura:\n");
	scanf("%f %f %f", &comprimento, &largura, &altura);
	vol = volume(comprimento, largura, altura);
	printf("Volume = %.1f", vol);
return(0);
}

float volume(float c, float l, float a){
	return(c*l*a);
}