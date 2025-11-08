#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float c, f;
	printf("Informe a temperatura em Celsius: ");
	scanf("%f", &c);
	
	f = (c*1.8)+32;
	
	printf("A temperatura em Fahrenheit será: %.2f", f);
return(0);
}
