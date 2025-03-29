#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
	float A[4][2], B[4][2];
	int i, j, x = 1, index = 0;
	//armazenar os elementos de A
	for (i=0; i<4; i++){
		for (j=0; j<2; j++){
			printf("Digite o %dº valor: ", x++);
			scanf("%f", &A[i][j]);
		}
	}
	//armazenar os elementos B
	for (i=3; i>=0; i--){
		for (j=1; j>=0; j--){
			B[i][j] = A[index / 2][index % 2];
            index++;
		}
	}
	
	//exibição de A
	printf("\n");
	printf("EXIBIÇÃO DA MATRIZ A\n");
	for (i=0; i<4; i++){
		for (j=0; j<2; j++){
			printf("%.1f\t", A[i][j]);
		}
		printf("\n");
	}
	
	//exibição de B
	printf("EXIBIÇÃO DE B EM ORDEM INVERSA\n");
	for (i=0; i<4; i++){
		for(j=0; j<2; j++){
			printf("%.1f\t", B[i][j]);
		}
	printf("\n");
	}
return(0);
}
