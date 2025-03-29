#include<locale.h>
#include<stdio.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int m[3][3], i, j, x = 1;
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("Informe o %dº valor: ", x++);
			scanf("%d", &m[i][j]);
		}
	}
	printf("\nElementos da matriz em ordem inversa: \n");
	for (i=2; i>=0; i--){
		for (j=2; j>=0; j--){
			printf("%d\t", m[i][j]);
		}
	}
	printf("\n");
}
