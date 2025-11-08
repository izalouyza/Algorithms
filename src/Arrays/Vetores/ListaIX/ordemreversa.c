#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int vet[8], i;
	for (i=0; i<8; i++){
		printf("Digite o %dº valor: ", i+1);
		scanf("%d", &vet[i]);
	}
	printf("\nVETORES\n");
	for (i=7; i>=0; i--){
		printf("%d ", vet[i]);
	}
return(0);
}