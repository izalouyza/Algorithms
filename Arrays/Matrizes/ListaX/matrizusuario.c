#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
	int n, m, i, j;
	printf("Informe o valor da linha: ");
	scanf("%d", &n);
	printf("Informe o valor da coluna: ");
	scanf("%d", &m);
	
	int A[n][m], B[n][m];
	
	//armazenar A
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			printf("Digite os elementos da matriz A: ");
			scanf("%d", &A[i][j]);
		}
	}
	//armazenar B
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			B[i][j] = A[i][j] * 3;
		}
	}
	
	//exibir A
	printf("\nMATRIZ A\n");
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}
	//exibir B
	printf("\nMATRIZ B\n");
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			printf("%d\t", B[i][j]);
		}
		printf("\n");
	}
return(0);
}
