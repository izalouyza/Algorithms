#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	printf("Informe um número: ");
	scanf("%d", &n1);
	printf("Informe um segundo número: ");
	scanf("%d", &n2);
	
	printf("O dobro do primeiro número será: %d \n", n1 * 2);
	printf("O triplo do segundo número será: %d \n", n2 * 3);
return(0);
}