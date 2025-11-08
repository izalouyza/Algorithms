#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i, v[10], maior = 0;
	for (i=0; i<10; i++){
		printf("Digite o %dº valor: ", i+1);
		scanf("%d", &v[i]);
	}
	for (i=0; i<10; i++){
		if (v[i]>maior){
			maior = v[i];
		}
	}
	printf("Maior valor encontrado no vetor: %d", maior);
return(0);
}