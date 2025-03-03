#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float vol, comp, larg, alt;
	printf("Informe o comprimento da caixa: ");
	scanf("%f", &comp);
	printf("Informe a largura da caixa: ");
	scanf("%f", &larg);
	printf("Informe a altura da caixa: ");
	scanf("%f", &alt);
	
	vol = comp * larg * alt;
	
	printf("O volume da caixa retangular é %.2fm³.", vol);
return(0);
}