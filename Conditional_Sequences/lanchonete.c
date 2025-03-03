#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int cod, qtd;
	
	printf("------------------ CARDÁPIO ------------------  ");
	printf("\n CÓDIGO DO ITEM \tESPECIFICAÇÃO  \tPREÇO UNITÁRIO");
	printf("\n       100 \t     Cachorro quente  \t 10,00");
	printf("\n       101 \t         Bauru        \t 12,00");
	printf("\n       102 \t       X-Salada       \t 15,00");
	printf("\n       103 \t      Hambúrguer      \t 18,00");
	printf("\n       104 \t  Refrigerante (lata) \t 5,00 \n");
	
	printf("\nQual o código do item desejado? ");
	scanf("%d", &cod);
	printf("Qual a quantidade do item desejado? ");
	scanf("%d", &qtd);
	
	switch (cod){
		case 100:
			printf("Pague R$ %d,00", 10*qtd);
		break;
		case 101:
			printf("Pague R$ %d,00", 12*qtd);
		break;
		case 102:
			printf("Pague R$ %d,00", 15*qtd);
		break;
		case 103:
			printf("Pague R$ %d,00", 18*qtd);
		break;
		case 104:
			printf("Pague R$ %d,00", 5*qtd);
		break;
		default:
			printf("Opção inválida.");
	}
return(0);
}