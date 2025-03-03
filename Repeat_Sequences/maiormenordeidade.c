#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i, cont = 1;
	do{
		printf("Informe sua idade: ");
		scanf("%d", &i);
		if (i>=18){
			printf("Você é maior de idade.\n");
		}
		else{
			printf("Você é menor de idade.\n");
		}
		cont++;
	}while (cont<=10);
return(0);
}