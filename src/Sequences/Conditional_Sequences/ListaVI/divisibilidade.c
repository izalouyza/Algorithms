#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int n1, n2;
	printf("Informe o primeiro número: ");
	scanf("%d", &n1);
	printf("Informe o segundo número: ");
	scanf("%d", &n2);
	        
	if ((n1>n2) && (n2!=0)){                  
		printf("\n Resultado: %d", n1/n2);
	}
	else{
		printf("Não é divisível, pois a divisão é indefinida.");
	}
return(0);
}