#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float m;
	printf("Quantas maçãs você deseja comprar? ");
	scanf("%f", &m);
	
	if (m<12){
		printf("Você deverá pagar R$ %.2f", m*1.30);
	}	
	else {
		printf("Você deverá pagar R$ %.2f", m*1.10);
	}
return(0);
}