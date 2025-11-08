#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int n, c;
	printf("Informe um número: ");
	scanf("%d", &n);
	
	c = pow(n, 3);
	
	printf("O cubo deste número é: %d", c);
return(0);
}