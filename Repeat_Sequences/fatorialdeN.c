#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int n, cont = 1, r = 1;
	printf("Informe um número: ");
	scanf("%d", &n);
	if (n>=0){
		while (cont<=n){
			r = r * cont;
			cont++;
		}
		printf("%d! = %d", n, r);
	}
	else{
		printf("Não existe fatorial de número negativo.");
	}
return(0);
}