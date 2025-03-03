#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Informe um número: ");
	scanf("%d", &n);
	printf("O antecessor deste número é: %d \n", n-1);
	printf("O sucessor deste número é: %d", n+1);
return(0);
}