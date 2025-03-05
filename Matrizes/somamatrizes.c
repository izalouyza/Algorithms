#include<locale.h>
#include<stdio.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int A[2][3], B[2][3], i, j, x = 1, s1 = 0, s2 = 0;
	
	//armazenar A
	for (i=0; i<2; i++){
		for (j=0; j<3; j++){
			printf("Informe o %dº valor: ", x++);
			scanf("%d", &A[i][j]);
			s1 = s1 + A[i][j];
		}
	}
	
	//armazenar B
	for (i=0; i<2; i++){
		for (j=0; j<3; j++){
			printf("Informe o %dº valor: ", x++);
			scanf("%d", &B[i][j]);
			s2 = s2 + B[i][j];
		}
	}
	printf("Soma das matrizes: %d", s1+s2);
}
