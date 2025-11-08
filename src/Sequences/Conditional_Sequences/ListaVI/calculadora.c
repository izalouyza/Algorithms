#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float v1, v2;
	char opcao;
	
	printf("--------------CALCULADORA SIMPLES----------------");
	printf("\n[+] ADIÇÃO");
	printf("\n[-] SUBTRAÇÃO");
	printf("\n[*] MULTIPLICAÇÃO");
	printf("\n[/] DIVISÃO\n");
	
	printf("\nSelecione a operação: ");
	scanf("%c", &opcao);
	printf("Selecione o primeiro número: ");
	scanf("%f", &v1);
	printf("Selecione o segundo número: ");
	scanf("%f", &v2);

	switch (opcao){
		case '+':
			printf("Resultado: %.2f", v1+v2);
		break;
		case '-':
			printf("Resultado: %.2f", v1-v2);
		break;
		case '*':
			printf("Resultado: %.2f", v1*v2);
		break;
		case '/':
			if (v2!=0){
				printf("Resultado: %.2f", v1/v2);
			}
			else {
				printf("Valor indefinido.");
			}
		break;
		default:
			printf("Opção inválida.");
			}
}