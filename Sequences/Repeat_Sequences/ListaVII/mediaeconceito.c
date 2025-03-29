#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int cont = 1;
	float ma = 0, n1, n2, n3;
	while(cont<=10){
		printf("%dº ALUNO\n", cont);
		cont++;
		printf("Informe a primeira nota: ");
		scanf("%f", &n1);
		printf("Informe a segunda nota: ");
		scanf("%f", &n2);
		printf("Informe a terceira nota: ");
		scanf("%f", &n3);
		ma = (n1+n2+n3)/3;
		printf("MA = %.1f", ma);
		if(ma>=9){
			printf("\n Conceito A.\n");
		}
		else if((ma>=7) && (ma<9)){
			printf("\nConceito B.\n");
		}
		else if((ma>=6) && (ma<7)){
			printf("\nConceito C.\n");
		}
		else if((ma>=4) && (ma<6)){
			printf("\nConceito D.\n");
		}
		else{
			printf("\nConceito E.\n");
		}
	}
return(0);
}